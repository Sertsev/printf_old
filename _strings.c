#include "holberton.h"

/**
 *tochar -  a function to change an integer into a character
 *@n: an integer to be changed
 *Return: returns a charcter
 */

char tochar(int n)
{
char c;
switch (n)
{
case 0:
c = '0';
break;
case 1:
c = '1';
break;
case 2:
c = '2';
break;
case 3:
c = '3';
break;
case 4:
c = '4';
break;
case 5:
c = '5';
break;
case 6:
c = '6';
break;
case 7:
c = '7';
break;
case 8:
c = '8';
break;
case 9:
c = '9';
break; }
return (c); }

/**
 *tostr - a function to change an integer into a string
 *@n: a long unsigned int
 *@instr: converted integer string
 *@base: an integer base type
 *Return: returns pointer
 */

char *tostr(unsigned long int n, char *instr, int base)
{
int i = 0;
unsigned int d = n;

if (n < 0)
{
n = n * (-1);
}

if (base > 0)
{
while (n >= 1)
{
instr[i] = tochar(n % base);
n = n / base;
i++;
}

if (d < 0)
instr[i] = '-';

instr[i] = '\0';
}
else
{
instr = "Error";
}

return (instr);
}

/**
 *ntostr - a function to change an integer into a string
 *@n: a long unsigned int
 *@instr: converted integer string
 *@base: an integer base type
 *Return: returns pointer
 */

char *ntostr(int n, char *instr, int base)
{
int i = 0;
int d = n;

if (n < 0)
{
n = n * (-1);
}
if (base > 0)
{
while (n >= 1)
{
instr[i] = tochar(n % base);
n = n / base;
i++;
}
if (d < 0)
{
instr[i] = '-';
i++; }
instr[i] = '\0';
}
else
{
instr = "Error";
}
return (instr);
}
