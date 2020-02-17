/**
 * swap_int - swap two values with pointers
 * @a: int
 * @b: b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
