#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _strlen(char *s);
char tochar(int n);
char *tostr(unsigned long int n, char *instr, int base);
char *ntostr(int n, char *instr, int base);
int _putchar(char c);
int _mySwit(char letter, va_list pargs);
char _printf(const char *format, ...);


#endif
