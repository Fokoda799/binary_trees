#include "binary_trees.h"

/**
 * binary_tree_leaves - function that that measures
 * num of leaves.
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 or 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	return (l + r);
}
