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

	if (parent == NULL || newNode == NULL || leftNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;
	return (newNode);
}
