/**
 * int_to_bin - converts signed and unsinged ints to binary
 * @digit: integer procided
 * Return: conversion result as string
 */

char *int_to_bin(unsigned int digit)
{
	int b, k = 0;
	char *bits;

	bits = malloc(sizeof(char));
	while (digit)
	{
		b = digit % 2;
		digit = digit / 2;
		bits[k] = b + '0';
		k++;
	}
	rev_string(bits);

	return (bits);
}
