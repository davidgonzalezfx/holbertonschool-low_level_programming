#include <stdio.h>
/**
 * main - main function
 * Description - Printing number up to 99 with putchar
 * Return: 0
 */
int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		for (int j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '9' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
