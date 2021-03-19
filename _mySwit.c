#include "holberton.h"

/**
 *_mySwit - a function to check cases and print arguments
 *@letter: argument identifier letter
 *@pargs: va list passed from the real function
 *Return: returns counted number of string
 */

int _mySwit(char letter, va_list pargs)
{
char leter, *str, decim[20];
int cou = 0, deci;
unsigned int uns;
switch (letter)
{
case 'c':
leter = (char) va_arg(pargs, int);
_putchar(leter);
cou++;
break;
case 's':
str = va_arg(pargs, char *);
while (str[cou] != '\0')
_putchar(str[cou]);
cou++;
break;
case 'i':
case 'd':
deci = va_arg(pargs, int);
if (deci > 0)
{
  ntostr(deci, decim, 10); }
tostr(deci, decim, 10);
cou += _strlen(decim);
int a = _strlen(decim);
while (a >= 0)
{
_putchar(decim[a]);
a--; }
break;
case 'u':
uns = va_arg(pargs, int);
tostr(uns, decim, 10);
cou += _strlen(decim);
a = _strlen(decim);
while (a >= 0)
_putchar(decim[a]);
a--;
break;
default:
_putchar(letter);
cou++;
break; }
return (cou); }
