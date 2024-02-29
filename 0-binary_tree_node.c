#include "binary_trees.h"

/**
 * binary_tree_node -Creates a binary tree node.
 * @parent: A pointer to the parent of the node create.
 * @value: The value for the new node.
 * 
 * Return: if an error  occurs, NULL is returned; otherwise, a pointer.
 * 
 */

binary_tree_t  *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree _t *new_node;
    
    new = malloc(sizeof(binary_tree_t));
    if (new == Null)
            return(NULL);

    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new ->right = NULL;

    return  (new_node);
    }