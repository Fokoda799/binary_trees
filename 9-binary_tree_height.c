<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;
	
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

    if (l > r)
    	return (l + 1);
    else
    	return (r + 1);
}
=======
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;
	
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	
	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
>>>>>>> 8644648bc9c5f90d772921da597944f49c5a2e3c
