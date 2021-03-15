#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

char *int_to_bin(unsigned int digit);

char *_itoa(int value, char *result, int base);
int _mywrite(char *any, int count);
void append(char *s, char c);
void rev_string(char *s);
int _strlen(char *s);
char *_strcat(char *dest, char *src);

#endif
