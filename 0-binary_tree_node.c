#include "binary_trees.h"

/**
 *binary_tree_node - creats a binary tree node
 *@parent: points to the parent of the node created
 *@value: stores the value of the new node
 *Return: points to the new node, is Null on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *rnode;


	rnode = malloc(sizeof(binary_tree_t));
	if (!rnode)
		return (NULL);
	rnode->n = value;
	rnode->parent = parent;
	rnode->left = NULL;
	rnode->right = NULL;
	return (rnode);
}
