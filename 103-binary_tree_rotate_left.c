#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Move the tree nodes from
 * right to left.
 *
 * @tree: Pointer to the parent node
 *
 * Return: New root;
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newRoot, *tmp;

	tmp = NULL;
	if (!tree)
		return (NULL);

	if (!tree->right)
		return (tree);

	if (tree->right->left)
		tmp = tree->right->left;

	newRoot = tree->right;
	tree->right->parent = NULL;
	tree->parent = tree->right;
	tree->right->left = tree;
	tree->right = tmp;

	if (tmp)
		tmp->parent = tree;

	return (newRoot);
}
