#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int fd = 0, sd;

	while (fd <= 99)
	{
		sd = fd;
		while (sd <= 99)
		{
			if (sd != fd)
			{
				putchar((fd / 10) + 48);
				putchar((fd % 10) + 48);
				putchar(' ');
				putchar((sd / 10) + 48);
				putchar((sd % 10) + 48);

				if (fd != 98 || sd != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			sd++;
		}
		fd++;
	}
	putchar('\n');
return (0);
}
