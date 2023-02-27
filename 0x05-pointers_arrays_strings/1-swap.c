/**
 * swap_int- draws a straight line in the terminal.
 * @a :number
 * @b :number
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
