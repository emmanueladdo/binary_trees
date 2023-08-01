#include "binary_trees.h"

/**
 *binary_tree_preorder - using pre-order traversal to go through a tree
 * if tree or func is NULL, do nothing
 *@tree: points to the root of the tree to traverse
 *@func: points to  a function to calll for every node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
