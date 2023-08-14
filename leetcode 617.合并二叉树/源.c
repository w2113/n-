#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
if (root1 && root2)//都不为空，结点值相加
{
    root1->val += root2->val;//相加到root1上的结点，最后返回root1
}
else if (root1)//如果root1不为空，链接root1
{
    return root1;
}
else
{
    return root2;
}
root1->left = mergeTrees(root1->left, root2->left);//递归root1/2链接到root1
root1->right = mergeTrees(root1->right, root2->right);

return root1;