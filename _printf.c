#include "holberton.h"

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

va_start(vaList, format);
while (*format)
{
if (*format == '%')
{
format++;

switch (*format)
{
case 'i':
case 'd':
printInt = va_arg(vaList, int);
itoa(printInt, intStr);
_strcat(buffer, intStr);
format++;
count += _strlen(intStr);
break;
case 's':
printStr = va_arg(vaList, char *);
_strcat(buffer, printStr);
format++;
count += _strlen(printStr);
break;
case 'c':
printChar = va_arg(vaList, int);
append(buffer, printChar);
format++;
count++;
break;
case '%':
append(buffer, '%');
format++;
count++;
break;
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
