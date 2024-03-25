#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child
 *
 * @parent: pointer to node to add child to
 * @value: int data to store in new node
 * Return: pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		tmp = parent->right;
		parent->right = new_node;
		new_node->right = tmp;
		new_node->right->parent = new_node;
	}
	else
		parent->right = new_node;

	return (new_node);
}
