#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 *Return: The returning the node
 *	null if parent NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

binary_tree_t *new;

if (!parent)
	return (NULL);

new = malloc(sizeof(binary_tree_t));
if (!new)
	return (NULL);

new->n = value;
new->parent = parent;
new->right = NULL;

if (parent->left != NULL)
{
	new->left = parent->left;
	parent->left->parent = new;
}
else
	new->left = NULL;

parent->left = new;

return (new);
}
