#include "holberton.h"

/**
 * _mywrite - a function to recieve and print the string
 * @any: a string to be printed
 *@count: the length of the string
 *
 *Return: returns 0
 */

int _mywrite(char *any, int count)
{
write(1, any, count);

return (0);
}
