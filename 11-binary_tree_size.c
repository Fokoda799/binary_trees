#include "binary_trees.h"

/**
 * binary_tree_size - function that gets the size of a binary tree.
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 or 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (l + r + 1);
}
