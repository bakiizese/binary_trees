#include "binary_trees.h"
/**
 * binary_tree_leaves - entry
 * @tree: tree
 * Return: num of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (right + left + 1);
	}
	else
		return (left + right);
}
