#include "holberton.h"


char* _itoa(int value, char* result, int base);
int _printf(const char *format, ...);
/**
 * definition of the function inside this function
 */

int _mywrite(char* any, int count);
void append(char* s, char c);

int main()
{
  _printf("Hello World you cant stop me sjkfhkjsbdkjfbkjsbdvkjbsjkbn sjkdbjkbskjdbfks %s djcn siud cjhs dh chs dchj shd chj sjdhch \n", "hello");
  return (0);
}

/**
 *_printf - a function to print whatever string argument it recieves
 *@format: a formatted string
 *Return: returns the number of string
 */

int _printf(const char *format, ...)
{
  int printInt, count = 0;
  char buffer[1024] = "";
  char printChar, *printStr, intStr[20];
  va_list vaList;

  va_start(vaList, *format);

  while(*format)
    {

      if(*format == '%')
	{
	  *format++;

	  /**
	   *switch statement for different cases printing
	   */

	  switch(*format)
	    {
	      /**
	       * %i to write or print integer
	       */

	    case 'i':
	      printInt = va_arg(vaList, int);
	      _itoa(printInt, intStr, 20);
	      // char* (*intStr);
	      append(buffer, *intStr);
	      format++;
	      count += strlen(intStr);
	      break;

	      /**
	       * %s to print a string
	       */

	    case 's':
	      printStr = va_arg(vaList, char *);
	      append(buffer, *printStr);
	      format++;
	      count += strlen(printStr);
	      break;

	      /**
	       * %c to write/print charcter
	       */

	    case 'c':
	      printChar = *(va_arg(vaList, char *));
	      append(buffer, printChar);
	      format++;
	      count++;
	      break;

	      /**
	       * %% to write/print percentile(%) charcter
	       */

	    case '%':
	      append(buffer, '%');
	      format++;
	      count++;
	      break;

	      /**
	       * incase nothing passed it skips
	       */

	    case '\0':
	      break;

	    default:
	      append(buffer, '%');
	      append(buffer, *format);
	      format++;
	      count += 2;
	    }
	}

      else
	{
	  append(buffer, *format);
	  format++;
	  count++;
	}

    }
  _mywrite(buffer, count);

  return (count);
}

/**
 *
 */

int _mywrite(char* any, int count)
{

  /** while(*any = \0)
   {
     count++;
  */ 

  write(1, any, count);

  return (0);
}

/**
 * append - a function to append acharcter to a string
 */

void append(char* s, char c) {
  int len = strlen(s);
  s[len] = c;
  s[len+1] = '\0';
}

char* _itoa(int value, char* result, int base) {
  
  if (base < 2 || base > 36) { *result = '\0'; return result; }

  char* ptr = result, *ptr1 = result, tmp_char;
  int tmp_value;

  do {
    tmp_value = value;
    value /= base;
    *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
  } while ( value );


  if (tmp_value < 0) *ptr++ = '-';
  *ptr-- = '\0';
  while(ptr1 < ptr) {
    tmp_char = *ptr;
    *ptr--= *ptr1;
    *ptr1++ = tmp_char;
  }
  return result;
}
