#include <stdio.h>

/**
 * main - print the new name
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[0]);
		i++;
	}

	return (0);
}
