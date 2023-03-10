#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - finds uncle of a node.
 * @node: ptr to the node to find the uncle.
 * Return: pointer to the uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent)
		return (binary_tree_sibling(node->parent));
	return (NULL);
}
