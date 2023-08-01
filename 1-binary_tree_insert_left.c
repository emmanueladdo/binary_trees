#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a left child to a node
 *@parent: points to the parent of the node the child is be inserted
 *@value: stores the value of the new node
 *Return: points to the new node, is Null on failure and if p
 *parents exits NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode = 0;


	if (parent == NULL)
		return (NULL);
	leftnode = calloc(1, sizeof(binary_tree_t));
	if (leftnode == NULL)
		return (NULL);
	leftnode->parent = parent;
	leftnode->n = value;
	if (parent->left != NULL)
	{
		leftnode->left = parent->left;
		leftnode->left->parent = leftnode;
	}
	parent->left = leftnode;
	return (leftnode);
}
