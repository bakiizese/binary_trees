#include "binary_trees.h"
/**
 * array_to_avl - entry
 * @array: pointer
 * @size: size
 * Return: tree
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t j;

	for (j = 0; j < size; j++)
	{
		avl_insert(&tree, array[j]);
	}
	if (j == size)
		return (tree);
	return (NULL);
}
