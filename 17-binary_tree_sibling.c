#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a ointer to the node to find the sibling.
 *
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	binary_tree_t *l_sibling = node->parent->left;
	binary_tree_t *r_sibling = node->parent->right;

	if (node == l_sibling)
		return (r_sibling);
	else
		return (l_sibling);
}
