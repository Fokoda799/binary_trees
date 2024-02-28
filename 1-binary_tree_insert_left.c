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
	binary_tree_t *tmp;

	if (parent == NULL || newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;

	tmp = parent->left;
	parent->left = newNode;

	if (tmp != NULL)
	{
		newNode->left = tmp;
		tmp->parent = newNode;
		parent->left = newNode;
	}
	else
		newNode->left = NULL;

	return (newNode);
}
