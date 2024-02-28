#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Function that delete a binary tree.
 *
 * @tree: Root node of a binary tree.
 *
 * Return: Nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
