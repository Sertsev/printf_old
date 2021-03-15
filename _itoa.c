#include "holberton.h"

/**
 * _itoa - a function to change an int to a string
 *
 *@value: the integer value
 *@result: the string that is changed
 *@base: the base of the integer
 *
 *Return: the result string
 */

char *_itoa(int value, char *result, int base)
{

if (base < 2 || base > 36)
{
*result = '\0';
return (result);
}

char *ptr = result, *ptr1 = result, tmp_char;
int tmp_value;

do {
tmp_value = value;
value /= base;
*ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz"[35 + (tmp_value - value *base)];

} while (value);

if (tmp_value < 0)
{
*ptr++ = '-';
*ptr-- = '\0';
}
while (ptr1 < ptr)
{
tmp_char = *ptr;
*ptr-- = *ptr1;
*ptr1++ = tmp_char;
}
return (result);
}
