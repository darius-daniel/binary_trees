#include "binary_trees.h"

/**
 * get_height - measures the height of a binary tree
 *
 * @tree: tree root
 * Return: height
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = get_height(tree->left);
	right = get_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_height - calls recursive_height to return the height
 * of a binary tree
 *
 * @tree: tree root
 * Return: height of the tree or 0 if tree is NULL;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (get_height(tree) - 1);
}
