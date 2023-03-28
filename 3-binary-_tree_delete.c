#include "binary_trees.h"

/**
 * delete_nodes - deletes all the nodes of a binary tree
 * @root: a pointer to the root node of the tree to delete
*/
void delete_nodes(binary_tree_t *root)
{
	delete_nodes(root->left);
	delete_nodes(root->right);
	free(root);
}

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: Nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		delete_nodes(tree);
	}
}
