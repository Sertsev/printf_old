/**
 * _str_length - determines the length of the string
 * @s: the string to get its length
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * rev_string - reverse string
 * @s: string being reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	char temp;
	int length, i;

	i = 0;
	length = (_strlen(s) - 1);

	while (i < length)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		i++;
		length--;
	}
}

/**
 * _strcat - contactinates strings
 * @dest: main string
 * @src: string to concatenate
 * Return: @dest(destination main string)
 */

char *_strcat(char *dest, char *src)
{
	int length, i;

	length = _strlen(dest);

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';

	return (dest);
}

/**
 * itoa - converts int to string
 * @n: the number to convert
 * @s: where to store the resulting string
 * Return: the resulting string
 */

char *itoa(int n, char *s)
{
	int i, sign;

	sign = n;
	if (n < 0)
		n = (-(n));
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	rev_string(s);

	return (s);
}
