#include "binary_trees.h"
#include <stdlib.h>
/**
 * height - tree
 * @tree: pointer
 * Return: int
 */
int height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (left > right ? left + 1 : right + 1);
}
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
/**
 * binary_tree_is_perfect - entry
 * @tree: pointer
 * Return: a, 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int f, hl, hr;

	if (tree == NULL)
		return (0);

	f = binary_tree_is_full(tree);
	hl = height(tree->left);
	hr = height(tree->right);

	if (hl != hr)
		return (0);
	else if (hl == hr)
	{
		if (f != 0)
			return (1);
	}
	return (0);
}
