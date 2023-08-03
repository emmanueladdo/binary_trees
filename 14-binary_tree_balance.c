#include "binary_trees.h"


/**
 * new_binary_tree_height - Measure the height of a binary tree
 * @tree: points to node of tree to measure
 * Return: height of the tree or 0 if NULL
 */

int new_binary_tree_height(const binary_tree_t *tree)
{
	int height_right, height_left;

	if (!tree)
		return (-1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height_right = new_binary_tree_height(tree->right);
	height_left = new_binary_tree_height(tree->left);
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

	left_height = (int)(new_binary_tree_height(tree->left));
	right_height = (int)(new_binary_tree_height(tree->right));

	return (left_height - right_height);
}
