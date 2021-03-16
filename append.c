#include "holberton.h"

/**
 * append - a function to append a character
 *
 *@s: a string where the character would be appended
 *@c: the charcter to be appended
 *
 *Return: void returns nth
 */

void append(char *s, char c)
{
int len = _strlen(s);
s[len] = c;
s[len + 1] = '\0';
}
