#include "holberton.h"

/**
 *_putchar - a function to print a charcter
 *@c: a charcter
 *Return: void
 */

int _putchar(char c)
{
write(1, &c, 1);
return (1);
}

/**
 *_strlen - a function to measure the length of a string
 *@s: as string
 *Return: returns
 */

int _strlen(char *s)
{
int l = 0;
while (s[l] != '\0')
l++;
return (l);
}

/**
 *_printf - home made printf function to print strings and other arguments
 *@format: a formated string
 *Return: returns void
 */

char _printf(const char *format, ...)
{
va_list args;
int count;

va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
count += _mySwit(*format, args);
}
else
_putchar(*format);
count++;
format++;
}
va_end(args);
return (count);
}
