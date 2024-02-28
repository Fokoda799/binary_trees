<<<<<<< HEAD
#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (l + r + 1);
} 
=======
#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return 0;

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (l + r + 1);
}
>>>>>>> b2f5bc6dd41e9b7b3a880ba250c8a8a97f8e1153
