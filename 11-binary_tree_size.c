#include "binary_trees.h"
/**
 * binary_tree_size - entry
 * @tree: tree
 * Return: num of size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
