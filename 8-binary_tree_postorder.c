#include "binary_trees.h"

/**
 * binary_tree_postorder - using post-order traversal
 * @tree: Points to the root of the traversed node
 * @func: points to function to call for every node
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((func != NULL) && (tree != NULL))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
	else
	{
		return;
	}
}
