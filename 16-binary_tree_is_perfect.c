#include "binary_trees.h"


/**
 * new_binary_tree_height - Measure the height of a binary tree
 * @tree: points to node of tree to measure
 * Return: height of the tree or 0 if NULL
 */

int new_binary_tree_height(const binary_tree_t *tree)
{
	int height_right, height_left;

	if (!tree)
		return (-1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height_right = new_binary_tree_height(tree->right);
	height_left = new_binary_tree_height(tree->left);
	if (height_right >= height_left)
		return (1 + height_right);
	return (1 + height_left);
}

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
* node_counter - count the number of nodes in a binary tree.
* @height: height.
* Return: size of the tree a perfect tree of height.
*/
size_t node_counter(size_t height)
{
	size_t i, ret = 1;

	if (!height)
		return (ret);
	for (i = 0; i < height; i++)
		ret = ret * 2;
	return (ret + node_counter(height - 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, otherwise 0.
 * if @tree is NULL, returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (node_counter(new_binary_tree_height(tree)) == binary_tree_size(tree));
}
