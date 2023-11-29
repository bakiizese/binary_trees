#include "binary_trees.h"
/**
 * binary_tree_height - entry
 * @tree: tree
 * Return: num of height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (left > right ? left + 1 : right + 1);
}
