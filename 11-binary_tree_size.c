#include "binary_trees.h"

/**
 * binary_tree_size - returns number of nodes of a tree
 *
 * @tree: pointer to root nodes
 * Return: a positive integer
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
}
