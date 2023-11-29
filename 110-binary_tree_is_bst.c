#include "binary_trees.h"
#include  <limits.h>
/**
 * check - entry
 * @min: min range
 * @tree: ponter
 * @max: max range
 * Return: 1, 0
 */
int check(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n > max || tree->n < min)
		return (0);
	return ((check(tree->left, min, tree->n - 1)) &&
		check(tree->right, tree->n + 1, max));
}
/**
 * binary_tree_is_bst - entry
 * @tree: pointer
 * Return: 0, 1
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check(tree, INT_MIN, INT_MAX));
}
