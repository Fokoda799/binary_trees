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
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 or 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_size, r_size, l_height, r_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_size == r_size && l_height == r_height)
		return (1);
	else
		return (0);
}
