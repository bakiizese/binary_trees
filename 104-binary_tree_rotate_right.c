#include "binary_trees.h"
/**
 * binary_tree_rotate_right - entry
 * @tree: pointer
 * Return: tr
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tr;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	tr = tree->left;
	tree->left = tr->right;

	if (tr->right != NULL)
		tr->right->parent = tree;

	tr->right = tree;
	tr->parent = tree->parent;
	tree->parent = tr;

	return (tr);
}
