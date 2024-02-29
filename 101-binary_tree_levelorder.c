#include "binary_trees.h"

/**
 * binary_tree_levelorder - function that goes through
 * binary tree using level-order traversal
 * @tree: Pointer to the root node.
 * @func: funcitin that print num.
 *
 * Return: the depth of the binary tree
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int j = 0, i = 0;
	binary_tree_t **list = malloc(sizeof(binary_tree_t *) * 1024);
	binary_tree_t *current;

	if (!tree || !func)
		return;
	if (!list)
		return;

	list[i++] = (binary_tree_t *)tree;

	while (j < i)
	{
		current = list[j++];
		func(current->n);

		if (current->left)
			list[i++] = current->left;

		if (current->right)
			list[i++] = current->right;
	}

	free(list);
}
