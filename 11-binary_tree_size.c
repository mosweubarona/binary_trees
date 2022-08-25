#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of a binary tree from a given node
 * @tree: root node of tree to measure from
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t the_size;

if (tree == NULL)
	return (0);

the_size = binary_tree_size(tree->left) + 1;
the_size += binary_tree_size(tree->right);

return (the_size);
}
