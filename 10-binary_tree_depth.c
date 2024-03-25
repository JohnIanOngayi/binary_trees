#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 *
 * @tree: pointer to the node
 * Return: a positive integer or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height = 0;

	while (tree->parent)
	{
		tree = tree->parent;
		height++;
	}

	return (height);
}
