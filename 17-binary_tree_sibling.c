#include "binary_trees.h"
/**
 * binary_tree_sibling - entry
 * @node: pointer
 * Return: new
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right == NULL)
			return (NULL);
		return (node->parent->right);
	}
	else
	{
		if (node->parent->left == NULL)
			return (NULL);
		return (node->parent->left);
	}
}
