#include "binary_trees.h"

/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: root node of a tree
 *Return: reutrns size of a tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter;

	if (tree != NULL)
	{
		counter = binary_tree_size(tree->left) + 1;
		counter += binary_tree_size(tree->right);
	}
	else
	{
		return (0);
	}

	return (counter);
}
