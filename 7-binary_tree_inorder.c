#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - 
 * @tree: pointer to the root of the tree.
 * @func: pointer to a func to print data in each node.
 *
 * description: this func traverses a binary tree in in-order
 * (left -> root -> right) manner.
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
