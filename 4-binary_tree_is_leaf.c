#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf.
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 on success, 0 on failure.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
