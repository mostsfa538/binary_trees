#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 1, height_right = 1;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
