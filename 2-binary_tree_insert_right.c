#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a right child to a node
 *@parent: points to the parent of the node the child is be inserted
 *@value: stores the value of the new node
 *Return: points to the new node, is Null on failure and if p
 *parents exits NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode = 0;


	if (parent == NULL)
		return (NULL);
	rightnode = calloc(1, sizeof(binary_tree_t));
	if (rightnode == NULL)
		return (NULL);
	rightnode->parent = parent;
	rightnode->n = value;
	if (parent->right != NULL)
	{
		rightnode->right = parent->right;
		rightnode->right->parent = rightnode;
	}
	parent->right = rightnode;
	return (rightnode);
}
