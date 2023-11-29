#include "binary_trees.h"
/**
 * binary_tree_depth - entry
 * @tree: pointer
 * Return: num of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int par;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	par = binary_tree_depth(tree->parent);

	return (par + 1);
}
