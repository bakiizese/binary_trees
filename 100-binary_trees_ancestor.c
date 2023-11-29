#include "binary_trees.h"
/**
 * depth - entry
 * @tree: pointer
 * Return: num of deopth
 */
int depth(const binary_tree_t *tree)
{
	int pra;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	pra = depth(tree->parent);

	return (pra + 1);
}
/**
 * binary_trees_ancestor - entry
 * @first: pointer
 * @second: ponter
 * Return: LCA
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int dpt;
	int dps;

	if (first == NULL || second == NULL)
		return (NULL);

	if ((first->n == second->n) || (first->parent == NULL &&
				second->parent == NULL))
	{
		binary_tree_t *new = (binary_tree_t *) first;

		return (new);
	}
	dpt = depth(first);
	dps = depth(second);

	if (dpt < dps)
		return (binary_trees_ancestor(first, second->parent));
	if (dpt > dps)
		return (binary_trees_ancestor(first->parent, second));
	if (dpt == dps)
		return (binary_trees_ancestor(first->parent, second->parent));

	return (NULL);
}
