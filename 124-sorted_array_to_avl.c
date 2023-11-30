#include "binary_trees.h"

avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL)
		return (NULL);

	avl_t *new = malloc(sizeof(avl_t));


	for (int i = 0; i < size; i++)
	{
		new = insert(
