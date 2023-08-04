#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest common ancestor of 2 nodes
 * @first: first node
 * @second: second node
 * Return: pointer to lowest common ancestor, else NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *fparent, *sparent;

	if (!first || !second)
		return (0);
	if (first == second)
		return ((binary_tree_t *)first);

	fparent = first->parent;
	sparent = second->parent;
	if (first == sparent || !fparent || (!fparent->parent && sparent))
		return (binary_trees_ancestor(first, sparent));
	if (second == fparent || !sparent || (!sparent->parent && fparent))
		return (binary_trees_ancestor(fparent, second));
	return (binary_trees_ancestor(fparent, sparent));
}
