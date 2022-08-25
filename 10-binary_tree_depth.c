#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree.
 * Depth is measured from root parent node going down.
 * @tree: pointer to node to measure depth
 * Return: depth of tree from given node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
