#include "binary_trees.h"
/**
 * tree_is_full - entry
 * @tree: pinter
 * Return: 0, 1
 */
int tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = tree_is_full(tree->left);
	right = tree_is_full(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (left && right);
}
/**
 * binary_tree_is_full - entry
 * @tree: pointer
 * Return: 0, 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (tree_is_full(tree));
}
