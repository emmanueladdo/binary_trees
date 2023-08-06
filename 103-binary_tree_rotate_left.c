#include "binary_trees.h"


/**
 *binary_tree_rotate_left - left rotation of the tree
 *@tree: The tree to be rotated
 *Return: The new tree
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp, *n_root;

	temp = NULL;
	if (tree == NULL)
		return (NULL);
	if (tree->right->left != NULL)
		temp = tree->right->left;
	if (tree->right == NULL)
		return (tree);
	n_root = tree->right;
	tree->right->left = tree;
	tree->parent = tree->right;
	tree->right->parent = NULL;
	tree->right = temp;
	if (temp != NULL)
		temp->parent = tree;
	return (n_root);
}
