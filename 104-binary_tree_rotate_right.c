#include "binary_trees.h"


/**
 *binary_tree_rotate_right - right rotation of the tree
 *@tree: The tree to be rotated
 *Return: The new tree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *n_root;

	temp = NULL;
	if (tree == NULL)
		return (NULL);
	if (tree->left->right != NULL)
		temp = tree->left->right;
	if (tree->left == NULL)
		return (tree);
	n_root = tree->left;
	tree->left->right = tree;
	tree->parent = tree->left;
	tree->left->parent = NULL;
	tree->left = temp;
	if (temp != NULL)
		temp->parent = tree;
	return (n_root);
}
