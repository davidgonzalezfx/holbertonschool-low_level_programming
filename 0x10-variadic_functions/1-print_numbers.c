#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: char *
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	va_list list;

	va_start(list, n);
	if (separator && n)
	{
		for (; i < (int)n - 1; i++)
		{
			printf("%i", va_arg(list, int));
			printf("%s", separator);
		}
		printf("%i", va_arg(list, int));
		printf("\n");
	}
	else if (separator == NULL)
	{
		for (; i < (int)n; i++)
			printf("%i", va_arg(list, int));
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
