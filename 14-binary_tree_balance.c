#include "binary_trees.h"

/**
 * bint - evaluates binary tree height
 *
 * @tree: pointer to root node
 * Return: a positive integer
 */
int bint(const binary_tree_t *tree)
{
	binary_tree_t *a;

	if (tree == NULL)
		return (-1);
	a = (binary_tree_t *)tree;
	return (
			bint(a->left) > bint(a->right) ?
			bint(a->left) + 1 :
			bint(a->right) + 1
	       );
}


/**
 * binary_tree_balance - evaluates the balance factor of a binary tree
 *
 * @tree: pointer to root node
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((bint(tree->left)) -
			(bint(tree->right)));
}
