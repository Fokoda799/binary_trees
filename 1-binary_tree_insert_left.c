#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as
 * the left-child of another node.
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 *
 * Return: New node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	binary_tree_t *newNode_ptr;

	if (parent == NULL || newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;

	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->parent = parent;
	}
	else
	{
		newNode->left = parent->left;
		(newNode->left)->parent = newNode;
		parent->left = newNode;
		newNode->parent = parent;
	}

	newNode_ptr = newNode;
	return (newNode_ptr);
}
