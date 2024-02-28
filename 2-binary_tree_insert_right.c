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
	binary_tree_t *newNode ;
	binary_tree_t *tmp;

	if (parent == NULL || newNode == NULL)
		return (NULL);

	newNode = binary_tree_t * malloc(sizeof(binary_tree_t));

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	tmp = parent->right;
	parent->right = newNode;

	if (tmp != NULL)
	{
		newNode->right = tmp;
		tmp->parent = newNode;
	}
	else
		newNode->right = NULL;

	return (newNode);
}
