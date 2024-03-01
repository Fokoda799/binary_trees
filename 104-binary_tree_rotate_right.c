#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Move the tree nodes from
 * left to right.
 *
 * @tree: Pointer to the parent node
 *
 * Return: New root;
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *newRoot, *tmp;

	tmp = NULL;
	if (!tree)
		return (NULL);

	if (!tree->left)
		return (tree);

	if (tree->left->right)
		tmp = tree->left->right;

	newRoot = tree->left;
	tree->left->parent = NULL;
	tree->parent = tree->left;
	tree->left->right = tree;
	tree->left = tmp;

	if (tmp)
		tmp->parent = tree;

	return (newRoot);
}
