#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a node is a root.
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 on success, 0 on failure.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
