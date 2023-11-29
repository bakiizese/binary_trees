#include "binary_trees.h"
#include <stdio.h>
int tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = tree_is_full(tree->left);
	right = tree_is_full(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return 1;
	else
		return left && right;
}
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return tree_is_full(tree);
}
