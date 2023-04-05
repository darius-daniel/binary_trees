#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is root
 *
 * @node: the given node
 * Return: 1 if node is root, 0 if node is NULL or not root.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
