#include "binary_trees.h"
#include <stdio.h>
#include <queue.h>

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	    if (tree == NULL || func == NULL)
		            return;

	        queue<const binary_tree_t *> q;
		    const binary_tree_t *node;

		        q.push(tree);
			    while (!q.empty())
				        {
						        node = q.front();
							        q.pop();
								        func(node->n);
									        if (node->left != NULL)
											            q.push(node->left);
										        if (node->right != NULL)
												            q.push(node->right);
											    }
}

