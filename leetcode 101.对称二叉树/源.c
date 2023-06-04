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
bool Symmetric(struct TreeNode* rootleft, struct TreeNode* rootright)
{
    if (rootleft == NULL && rootright == NULL)
    {
        return true;
    }
    if (rootleft == NULL || rootright == NULL || rootleft->val != rootright->val)
    {
        return false;
    }
    return Symmetric(rootleft->left, rootright->right) && Symmetric(rootleft->right, rootright->left);
}
bool isSymmetric(struct TreeNode* root) {
    return Symmetric(root->left, root->right);
}