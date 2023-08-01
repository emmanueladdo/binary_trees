#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: the node to check
 * Return: retruns 1 if true or 0 if false
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
		if (node->left == NULL && node->right == NULL)
			return (1);
		else
			return (0);
	else
		return (0);
}
