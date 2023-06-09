#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: the highest value to print the times table for.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
				printf("%d", result);
			else
				printf(", %d", result / 10 ? result : result < 0 ? result : (result % 10) + ((result / 10) % 10) * 10 + ((result / 100) % 10) * 100);
		}
		printf("\n");
	}
}
