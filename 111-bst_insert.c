#include "binary_trees.h"

/**
 *bst_insert - inserts a value in a BST
 *@tree: points to the root node of BST insert value
 *@value: stores in he node to ne inserted
 *Return: a pointer to created node, NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		else
			return (bst_insert(&((*tree)->right), value));
	}
	else if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		else
			return (bst_insert(&((*tree)->left), value));
	}
	else
		return (NULL);
}
