#include "variadic_functions.h"


/**
 * sum_them_all - sum all arguments
 * @n: num of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0, sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (; i < (int) n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
