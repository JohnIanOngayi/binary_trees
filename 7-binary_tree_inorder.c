#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses tree in inorder
 *
 * @tree: pointer to the root node
 * @func: pointer to function to print stored value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
