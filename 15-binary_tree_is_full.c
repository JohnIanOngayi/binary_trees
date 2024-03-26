#include "binary_trees.h"

/**
 * binary_tree_is_full - checks whether a tree is full
 *   each node in a full tree has either 0 or 2 children
 *
 * @tree: pointer to the root node
 * Return: 1 if yes, 0 also if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if (tree->left && tree->right)
		return(
				binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right)
		      );
	return (0);
}
