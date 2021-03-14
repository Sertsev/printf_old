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
