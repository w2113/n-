#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;
BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	node->_data = x;
	node->_left = NULL;
	node->_right = NULL;
	return node;
}

// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}
	BTNode* root = BuyNode(a[*pi]);
	(*pi)++;
	root->_left = BinaryTreeCreate(a, n, pi);
	root->_right = BinaryTreeCreate(a, n, pi);
	return root;
}
void Inorder(BTNode* root)
{
	if (root == NULL)
		return;
	Inorder(root->_left);
	printf("%c ", root->_data);
	Inorder(root->_right);

}
int main()
{
	char a[100];
	scanf("%s", a);
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, strlen(a), &i);
	Inorder(root);
	return 0;
}