#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of command line argument
 * @argv: pointer to an array of command line argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lc = 0, mon = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (mon >= c[i])
			{
				lc += mon / c[i];
				mon = mon % c[i];
				if (mon % c[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
