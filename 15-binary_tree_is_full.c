#include "binary_trees.h"

/**
 * binary_tree_is_full - checking if the binary tree is full
 * @tree: The tree to be evaluated
 * Return: 1 if the node is a leaf and returning the highest node;
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int isFull = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	isFull = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	return (isFull);
}
