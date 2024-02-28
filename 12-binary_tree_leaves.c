<<<<<<< HEAD
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
=======
#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	return (l + r);
}
>>>>>>> b2f5bc6dd41e9b7b3a880ba250c8a8a97f8e1153
