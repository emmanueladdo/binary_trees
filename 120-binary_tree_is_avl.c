#include "binary_trees.h"
#include "110-binary_tree_is_bst.c"

/**
 * custom_binary_tree_height - Measure the height
 * of a binary tree from a given node
 * @tree: pointer to node of tree to measure
 * Description: Edited to work with balance factor function
 * Return: height of tree or 0 if NULL
 */
int custom_binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = custom_binary_tree_height(tree->left) + 1;
	right = custom_binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_is_avl - check if a binary tree is a valid AVL tree
 * @tree: pointer to root node of tree
 * Return: 1 if AVL tree, else 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (0);

	lheight = custom_binary_tree_height(tree->left);
	rheight = custom_binary_tree_height(tree->right);

	if (abs(lheight - rheight) <= 1)
		return (binary_tree_is_bst(tree));
	return (0);
}
