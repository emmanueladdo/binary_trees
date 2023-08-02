#include "binary_trees.h"

/**
 *binary_tree_depth - measures the depth of a node in the tree
 *@node: points to node tto measure
 *Return: depth of tree from a given node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node != NULL && node->parent != NULL)
		return (binary_tree_depth(node->parent) + 1);
	else
		return (0);
}
