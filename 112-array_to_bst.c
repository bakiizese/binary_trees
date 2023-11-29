#include "binary_trees.h"

bst_t *array_to_bst(int *array, size_t size)
{
	int i;
	bst_t *new = malloc(sizeof(bst_t));
	bst_t *p = malloc(sizeof(bst_t));

	if (new == NULL)
		return NULL;

	for (i = 0; i < size; i++)
	{
		p = bst_insert(new, array[i]);
	}
	return p;
}
