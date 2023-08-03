#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: points to the node to find sibling to
 *
 * Return: points to sibling node, else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
