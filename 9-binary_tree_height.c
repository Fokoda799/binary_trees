#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l= 0;
	size_t r= 0;
	
	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
	{
		r = 1;
		l = 1;
	}

	l += binary_tree_height(tree->left);
	r += binary_tree_height(tree->right);

    if (l > r)
    	return (l);
    else
    	return (r);
}
