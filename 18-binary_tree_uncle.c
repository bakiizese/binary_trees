#include "binary_trees.h"
/**
 * binary_tree_uncle - entry
 * @node: pointer
 * Return: pointer
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
	{
		if (node->parent->parent->right == NULL)
			return (NULL);
		return (node->parent->parent->right);
	}
	else
	{
		if (node->parent->parent->left == NULL)
			return (NULL);
		return (node->parent->parent->left);
	}
}
