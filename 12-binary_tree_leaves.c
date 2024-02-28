#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t l = 0, r = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if (tree->left)
		l = 1;
	if (tree->right)
		r = 1;

}