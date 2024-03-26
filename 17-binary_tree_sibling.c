#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent || !node->parent->right)
        return (NULL);
    return (node->parent->right);
}
