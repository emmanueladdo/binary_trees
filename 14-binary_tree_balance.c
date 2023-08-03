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

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: points to node of tree to measure
 * Return: height of the tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right, height_left;

	if (!tree)
		return (-1);

	if (binary_tree_is_leaf(tree))
		return (0);

	height_right = binary_tree_height(tree->right);
	height_left = binary_tree_height(tree->left);
	if (height_right >= height_left)
		return (1 + height_right);
	return (1 + height_left);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: points to the root node of tree to measure
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = (int)(binary_tree_height(tree->left));
	right_height = (int)(binary_tree_height(tree->right));

	return (left_height - right_height);
}
