#include "binary_trees.h"


int depth(const binary_tree_t *tree)
{
	int par;

	if (tree == NULL)
		return 0;
	if (tree->parent == NULL)
		return (0);
	par = depth(tree->parent);
	return par + 1;
	
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depl, depr;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return depl = (depth(tree->left));
		return depr = (depth(tree->right));
	}
	return binary_tree_is_perfect(tree->left);
	return binary_tree_is_perfect(tree->right);


	return depl == depr ? 1 : 0;
}
