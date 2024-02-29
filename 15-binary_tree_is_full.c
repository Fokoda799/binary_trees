#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 or 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if (!tree->left || !tree->right)
		return (0);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	if (l == r)
		return (1);
	else
		return (0);
}
