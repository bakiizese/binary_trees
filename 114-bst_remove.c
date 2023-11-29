#include "binary_trees.h"

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *new, rt;

	if (root == NULL)
		return (NULL);

	new = bst_search(root, value);
	if (new->left != NULL && new->right != NULL)
	{
		new->right->left->left = new->left;
		new->left->parent = new->right->left;
		if (new->parent != NULL)
		{
			if (new->parent->left == new)
				new->parent->left = new->right->left;
			else if (new->parent->right == new)
				new->parent->right = new->right->left;
		rt = new;
		free(new);
	}
	free(new);
	}
}
