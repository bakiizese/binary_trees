#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - entry
 * @parent: pointer
 * @value: var
 * Return: new
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new;
		new->parent = parent;
		new->right = temp;
		temp->parent = new;

		return (new);
	}
	parent->right = new;
	new->parent = parent;

	return (new);
}
