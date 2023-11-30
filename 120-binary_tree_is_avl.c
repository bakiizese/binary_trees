#include "binary_trees.h"
#include <limits.h>
#include <stdlib.h>
/**
 * height - entry
 * @tree: ponter
 * Return: height
 */
int height(const binary_tree_t *tree)
{
	int lft = 0;
	int rt = 0;

	if (!tree)
		return (0);
	lft = tree->left ? 1 + height(tree->left) : 0;
	rt = tree->right ? 1 + height(tree->right) : 0;

	return (lft > rt ? lft : rt);
}
/**
 * check - entry
 * @tree: pointer
 * @min: min range
 * @max: max range
 * Return: 0, 1
 */
int check(const binary_tree_t *tree, int min, int max)
{
	int lft, rt;

	if (tree == NULL)
		return (1);
	if (tree->n > max || tree->n < min)
		return (0);

	lft = tree->left ? 1 + height(tree->left) : 0;
	rt = tree->right ? 1 + height(tree->right) : 0;

	if (abs(lft - rt) > 1)
		return (0);
	return ((check(tree->left, min, tree->n - 1)) &&
			check(tree->right, tree->n + 1, max));
}
/**
 * binary_tree_is_avl - entry
 * @tree: pointer
 * Return: 0, 1
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check(tree, INT_MIN, INT_MAX));
}
