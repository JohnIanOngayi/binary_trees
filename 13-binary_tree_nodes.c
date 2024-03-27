#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to root node
 * Return: a non-negative integer
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}


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
/**
 * binary_tree_nodes - counts nodes with at least one child
 *
 * @tree: pointer to the root node
 * Return: a non-negative integer
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (
			binary_tree_size(tree) -
			binary_tree_leaves(tree)
	       );
}
