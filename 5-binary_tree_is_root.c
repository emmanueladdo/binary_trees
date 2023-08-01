#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is a root
 * @node: the node to check
 * Return: retruns 1 if true or 0 if false
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
		if (node->parent == NULL)
			return (1);
		else
			return (0);
	else
		return (0);
}
