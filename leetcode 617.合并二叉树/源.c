#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
if (root1 && root2)//����Ϊ�գ����ֵ���
{
    root1->val += root2->val;//��ӵ�root1�ϵĽ�㣬��󷵻�root1
}
else if (root1)//���root1��Ϊ�գ�����root1
{
    return root1;
}
else
{
    return root2;
}
root1->left = mergeTrees(root1->left, root2->left);//�ݹ�root1/2���ӵ�root1
root1->right = mergeTrees(root1->right, root2->right);

return root1;