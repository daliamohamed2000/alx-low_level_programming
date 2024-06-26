/**
 * _strpbrk - a function that searches a
 *            string.
 *
 * @s: pointer to input string
 * @accept: pointer to string we
 *
 * Return: pointer to the bytes in @s
 *         or NULL if no byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
