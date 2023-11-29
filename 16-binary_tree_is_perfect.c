#include "binary_trees.h"


int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;
	return 1 + height(tree->left);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 1;
	int left_height = height(tree->left);
	int right_height = height(tree->right);
	
	if (left_height == right_height && binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return 1;
	return 0;
}

