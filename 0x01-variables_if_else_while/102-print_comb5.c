#include <stdio.h>
/**
 * main - main function
 * Description - Print combination fo two different numbers
 * Return: 0
 */
int main(void)
{
int d1, d2, d3, d4;

for (d1 = '0'; d1 <= '9'; d1++)
	for (d2 = '0'; d2 <= '9'; d2++)
		for (d3 = '0'; d3 <= '9'; d3++)
			for (d4 = '0'; d4 <= '9'; d4++)
			{
				if (d1 < d3 || (d1 == d3 && d2 < d4))
				{
					putchar(d1);
					putchar(d2);
					putchar(' ');
					putchar(d3);
					putchar(d4);
					if (d1 != '9' || d2 != '8' ||
					    d3 != '9' || d4 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
putchar('\n');
return (0);
}
