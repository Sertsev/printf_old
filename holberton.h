#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * including necessary libraries
 */

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * a function defination
 */

int _printf(const char *format, ...);
char* _itoa(int value, char* result, int base);
int _printf(const char *format, ...);
int _mywrite(char* any, int count);
void append(char* s, char c);

#endif
