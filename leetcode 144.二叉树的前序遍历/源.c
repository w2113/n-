#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int BTSize(struct TreeNode* root)
{
    return root == NULL ? 0 : BTSize(root->left) + BTSize(root->right) + 1;
}
void PrevOrder(struct TreeNode* root, int* returnRoot, int* i)
{
    if (root == NULL)
        return;
    returnRoot[(*i)++] = root->val;
    PrevOrder(root->left, returnRoot, i);
    PrevOrder(root->right, returnRoot, i);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = BTSize(root);
    int* p = (int*)malloc(sizeof(int) * (*returnSize));
    int i = 0;
    PrevOrder(root, p, &i);
    return p;
}