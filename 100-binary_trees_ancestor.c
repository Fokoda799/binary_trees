#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: a pointer to the node to measure the depth
*
* Return: the depth of the binary tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (tree == NULL || tree->parent == NULL)
return 0;

depth = binary_tree_depth(tree->parent);

return (depth + 1);
}

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: pointer to the first node
* @second: pointer to the second node
* Return: pointer to the lowest common ancestor node of the two given nodes
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
if (first == NULL || second == NULL)
return NULL;

size_t depth_first = binary_tree_depth(first);
size_t depth_second = binary_tree_depth(second);

while (depth_first > depth_second)
{
first = first->parent;
depth_first--;
}
while (depth_second > depth_first)
{
second = second->parent;
depth_second--;
}

while (first != NULL && second != NULL)
{
if (first == second)
return (binary_tree_t *)first;
first = first->parent;
second = second->parent;
}

return NULL;
}
