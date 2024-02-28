#include "binary_trees.h"


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (l + r + 1);
	else
		return (l + r);
}
