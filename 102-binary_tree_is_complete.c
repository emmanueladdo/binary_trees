#include "binary_trees.h"

/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: root node of a tree
 *Return: reutrns size of a tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter;

	if (tree != NULL)
	{
		counter = binary_tree_size(tree->left) + 1;
		counter += binary_tree_size(tree->right);
	}
	else
	{
		return (0);
	}

	return (counter);
}

/**
* check - goes through a binary tree using level-order.
* @tree: pointer to the root node of the tree to traverse.
* @lvl: pointer to a function to call for each node.
* @func: pointer to a function to call for each node.
* Return: 1 if the tree is complete, 0 otherwise.
*/

int check(const binary_tree_t *tree, size_t lvl, size_t func)
{
	if (!tree)
		return (1);
	if (lvl >= func)
		return (0);
	return (check(tree->left, (lvl * 2) + 1, func) && check(tree->right,
	(lvl * 2) + 2, func));
}

/**
* binary_tree_is_complete - goes through a binary tree using level-order.
* @tree: pointer to the root node of the tree to traverse.
* Return: 1 if the tree is complete, 0 otherwise.
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (check(tree, 0, binary_tree_size(tree)));
}
