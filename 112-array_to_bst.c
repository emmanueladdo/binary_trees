#include "binary_trees.h"

/**
 *array_to_bst - builds a BST from an aaray
 *@array: pointer to the first element
 *@size: number of a elements
 *Return: points to the root node
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t item;
	bst_t *root;

	if (array == NULL || size == 0)
		return (NULL);
	for (item = 0, root = NULL; item < size; item++)
		bst_insert(&root, array[item]);

	return (root);
}
