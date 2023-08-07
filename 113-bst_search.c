#include "binary_trees.h"


/**
 * bst_search - Searches for a value in a Binary Search Tree
 * @tree: pointer to root node of BST
 * @value: value to look for
 * Return: points to node containing value, else NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
