#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses tree in preorder
 *
 * @tree: pointer to the root node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
