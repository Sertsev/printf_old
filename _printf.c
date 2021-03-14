#include "holberton.h"

/**
 * definition of the function inside this function
 */

int _mywrite(char* any);
void append(char* s, char c);

/**
 *_printf - a function to print whatever string argument it recieves
 *@format: a formatted string
 *Return: returns the number of string
 */

int _printf(const char *format, ...)
{
int printInt, count = 0;
char buffer[1024];
char *printStr, intStr[20];
va_list vaList;

va_start(vaList, *format);

while(*format)
{

if(*format == "%")
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
_itoa(printInt, intStr, 20)
append(buffer, intStr);
format++;
count += strlen(intStr);
break;

/**
 * %s to print a string
 */

case 's':
printStr = va_arg(vaList, char *);
append(buffer, printStr);
format++;
count += strlen(printStr);
break;

/**
  * %c to write/print charcter
 */

case 'c':
printChar = va_arg(vaList, char);
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

else if("\\")
{
  break;
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
int count = 0;

while(*any = \0)
{
  count++;
}

write(1, *any, count);

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
