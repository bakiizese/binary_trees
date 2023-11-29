#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - entry
 * @parent: pointer
 * @value: var
 * Return: new
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;
	new->parent = parent;
	return (new);
}
