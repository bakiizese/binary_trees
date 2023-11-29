#include "binary_trees.h"
/**
 * array_to_bst - entry
 * @array: pointer array
 * @size: int
 * Return: new
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned long int i;
	bst_t *new = NULL;

	for (i = 0; i < size; i++)
	{
		bst_insert(&new, array[i]);
	}
	return (new);
}
