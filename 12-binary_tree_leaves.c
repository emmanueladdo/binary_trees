#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the num of leaves in a tree
 *@tree: tree which leaves are counted
 *Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf, right_leaf;

	left_leaf = 0;
	right_leaf = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);
	return (left_leaf + right_leaf);
}
