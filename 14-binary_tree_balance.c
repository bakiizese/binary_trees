#include "binary_trees.h"
/**
 * left_ba - entry
 * @tree: pointer
 * Return: left height
 */
int left_ba(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (-1);

	left = left_ba(tree->left);
	right = left_ba(tree->right);

	return (left > right ? left + 1 : right + 1);
}
/**
 * right_ba - entry
 * @tree: ponter
 * Return: right height
 */
int right_ba(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);
	left = right_ba(tree->left);
	right = right_ba(tree->right);

	return (left > right ? left + 1 : right + 1);
}
/**
 * binary_tree_balance - entry
 * @tree: pointer
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = left_ba(tree->left);
	right = right_ba(tree->right);

	return (left - right);
}
