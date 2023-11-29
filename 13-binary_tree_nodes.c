#include "binary_trees.h"
/**
 * binary_tree_nodes - entry
 * @tree: tree
 * Return: num of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (right + left + 1);
	else
		return (0);
}
