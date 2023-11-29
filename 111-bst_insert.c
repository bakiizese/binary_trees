#include "binary_trees.h"
#include <stdlib.h>
/**
 * bst_insert - entry
 * @tree: pointer
 * @value: int
 * Return: new
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new;

	if (tree == NULL)
		return (NULL);
	new = malloc(sizeof(bst_t));

	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (*tree == NULL)
	{
		return (*tree = binary_tree_node(NULL, value));
	}
	if (new->n < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = new;
			new->parent = (*tree);
			return (new);
		}
		return (bst_insert(&((*tree)->left), value));
	}
	else if (new->n > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = new;
			new->parent = (*tree);
			return (new);
		}
		return (bst_insert(&((*tree)->right), value));
	}
	return (new);
}
