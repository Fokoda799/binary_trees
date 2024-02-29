#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 or 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l = binary_tree_is_perfect(tree->left);
	r = binary_tree_is_perfect(tree->right);

	if (l == r)
		return (1);
	else
		return (0);
}
