#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as
 * the right-child of another node.
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 *
 * Return: New node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (parent == NULL || newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}

	parent->right = newNode;
	return (newNode);
}
