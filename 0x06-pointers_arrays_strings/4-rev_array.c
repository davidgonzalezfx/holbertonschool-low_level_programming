/**
 * reverse_array - reverse in array
 * @a: array
 * @n: size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, aux;

	n--;
	for (i = 0; i < n; i++, n--)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
	}
}
