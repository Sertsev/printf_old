#ifndef HOLBERTON_H
#define HOLBERTON_H


#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 *printf function defination
 */

int _printf(const char *format, ...);

char *int_to_bin(unsigned int digit);

/**
 * string functions
 */
void rev_string(char *s);
int _strlen(char *s);
char *_strcat(char *dest, char *src);

#endif
