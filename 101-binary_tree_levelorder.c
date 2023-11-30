#include "binary_trees.h"
/**
 * help - entry
 * @tree: pointer
 * @func: print func
 * @level: level
 */
void help(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		help(tree->left, func, level - 1);
		help(tree->right, func, level - 1);
	}
}
/**
 * height - entyr
 * @tree: pointer
 * Return: height num
 */
int height(const binary_tree_t *tree)
{
	int hl = 0;
	int hr = 0;

	if (!tree)
		return (0);

	hl = tree->left ? 1 + height(tree->left) : 0;
	hr = tree->right ? 1 + height(tree->right) : 0;
	return (hl > hr ? hl : hr);
}
/**
 * binary_tree_levelorder - enry
 * @tree: pointer
 * @func: print func
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level;
	int maxl;

	if (!tree || !func)
		return;

	maxl = height(tree) + 1;

	for (level = 1; level <= maxl; level++)
		help(tree, func, level);
}
