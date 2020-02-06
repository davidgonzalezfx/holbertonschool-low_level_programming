#include <stdio.h>

/**
 * main - main function
 * Description - prints alphabet with putchar
 * Return: 0
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
	}
	putchar('\n');
	return (0);
}
