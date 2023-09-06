#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	const binary_tree_t **queue;
	size_t front = 0, back = 0, tree_size;
	int flag = 0;

	tree_size = binary_tree_size(tree);
	queue = malloc(sizeof(*queue) * tree_size);
	if (!queue)
		return (0);
	queue[back] = tree;
	while (front <= back)
	{
		const binary_tree_t *temp = queue[front++];

		if (!temp)
			flag = 1;
		else
		{
			if (flag)
			{
				free(queue);
				return (0);
			}
			if (back + 1 < tree_size)
			{
				queue[++back] = temp->left;
				if (!temp->left)
				flag = 1;
			}
			if (back + 1 < tree_size)
			{
				queue[++back] = temp->right;
				if (!temp->right)
				flag = 1;
			}
		}
	}
	free(queue);
	return (1);
}
