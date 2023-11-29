#include "binary_trees.h"
/**
 * binary_tree_rotate_left - entry
 * @tree: pointer
 * Return: tr
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tr;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	tr = tree->right;
	tree->right = tr->left;

	if (tr->left != NULL)
		tr->left->parent = tree;
	tr->left = tree;
	tr->parent = tree->parent;
	tree->parent = tr;

	return (tr);
}
