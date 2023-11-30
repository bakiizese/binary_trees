#include "binary_trees.h"
/**
 * tree_size - enty
 * @tree: pointer
 * Return: 0
 */
size_t tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (tree_size(tree->left) + tree_size(tree->right) + 1);
}
/**
 * check - enty
 * @tree: pointer
 * @i: num int
 * @siz: size
 * Return: 1, 0
 */
int check(const binary_tree_t *tree, int i, int siz)
{
	if (tree == NULL)
		return (1);
	if (i >= siz)
		return (0);
	return (check(tree->left, (2 * i) + 1, siz) &&
		check(tree->right, (2 * i) + 2, siz));
}
/**
 * binary_tree_is_complete - entry
 * @tree: pinter
 * Return: 1 , 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t j;

	if (tree == NULL)
		return (0);
	j = tree_size(tree);
	return (check(tree, 0, j));
}
