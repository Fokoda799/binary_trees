#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal.
 * @tree: pointer to the root of the tree.
 * @func: pointerto a func to print data in each node.
 *
 * description: this function traverses a binary tree in preorder
 * (root -> left -> right) manner.
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
