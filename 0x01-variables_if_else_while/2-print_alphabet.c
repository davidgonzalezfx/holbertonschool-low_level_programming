#include <stdio.h>

/**
 * main - main function
 * Description - prints alphabet with putchar
 * Return: 0
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
}
