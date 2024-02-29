#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling.
 *
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent ||
	    !node->parent->left || !node->parent->right)
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
