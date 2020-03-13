#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: char*
 * @n: const unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i =0;
	char *str;
	va_list list;

	if (n < 1)
		printf("\n");
	else
	{
		va_start(list, n);
		for (; i < (int)n; i++)
		{
			str = va_arg(list, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator != NULL && i != (int)n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
