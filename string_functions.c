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
