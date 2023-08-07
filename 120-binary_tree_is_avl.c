#include "binary_trees.h"
#include "9-binary_tree_height.c"


/**
 * avl_val - helper function to compare each subtree if its AVL.
 * @tree: node that point to the tree to check.
 * @high: node that point to the higher node selected
 * @lower: node that point to the lower node selected.
 * Return: 1 if tree is AVL, 0 if not.
 */
int avl_val(const binary_tree_t *tree, int lower, int high)
{
	size_t height_l, height_r, balancer;

	if (tree != NULL)
	{
		if (tree->n > high || tree->n < lower)
		{
			return (0);
		}
		height_l = binary_tree_height(tree->left);
		height_r = binary_tree_height(tree->right);
		balancer = height_l > height_r ? height_l - height_r : height_r - height_l;
		if (balancer > 1)
		{
			return (0);
		}
		return (avl_val(tree->left, lower, tree->n - 1) &&
			avl_val(tree->right, tree->n + 1, high));
	}
	return (1);
}

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (avl_val(tree, INT_MIN, INT_MAX));
}
