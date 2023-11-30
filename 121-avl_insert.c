#include "binary_trees.h"
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp = NULL;
	bst_t *second = NULL;
	bst_t *new = NULL;

	if (!tree)
		return (NULL);
	
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));
	tmp = *tree;
	while (tmp)
	{
	second = tmp;

	if (value < tmp->n)
		tmp = tmp->left;
	else if (value > tmp->n)
		tmp = tmp->right;
	else if (value == tmp->n)
		return (NULL);
	}
	new = binary_tree_node(NULL, value);
	if (second == NULL)
		second = new;
	else if (value < second->n)
	{
		second->left = new;
		new->parent = second;
	}
	else
	{
		second->right = new;
		new->parent = second;
	}
	return (new);
}
avl_t *avl_insert(avl_t **tree, int value)
{
		int balance = 0;
			avl_t *node = bst_insert(tree, value);

				balance = binary_tree_balance(*tree);

					if (balance > 1 && value < node->left->n)
								return (binary_tree_rotate_right(node));
						if (balance < -1 && value > node->right->n)
									return (binary_tree_rotate_left(node));
							if (balance > 1 && value > node->left->n)
									{
												node->left = binary_tree_rotate_left(node->left);
														return (binary_tree_rotate_right(node));
															}
								if (balance < -1 && value < node->right->n)
										{
													node->right = binary_tree_rotate_right(node->right);
															return (binary_tree_rotate_left(node));
																}

									return (node);
}
