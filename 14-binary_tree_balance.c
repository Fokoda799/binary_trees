#include "binary_trees.h"

/**
 * binary_tree_height - function that gets the height of a binary tree.
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}

/**
 * binary_tree_balance - function that that measures
 * the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 or 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	return (l - r);
}
