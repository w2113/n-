#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/**
 *
 * @param rotateArray int����һά����
 * @param rotateArrayLen int rotateArray���鳤��
 * @return int����
 */
//��һ������Ϊ n �ķǽ������飬����[1, 2, 3, 4, 5]��
//����������ת������һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ��
//���һ����ת���飬��������[3, 4, 5, 1, 2]������[4, 5, 1, 2, 3]�����ġ�
//���ʣ���������һ����ת���飬�������е���Сֵ��
//���ݷ�Χ1��10000������������Ԫ�ص�ֵ0��10000
//�ռ临�Ӷ�o��1����ʱ�临�Ӷ�o��logn��
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    // write code here
    int i = 0;
    for (i = 1; i < rotateArrayLen; i++)
    {
        if (rotateArray[i - 1] > rotateArray[i])
            return rotateArray[i];
    }
    return rotateArray[0];
}