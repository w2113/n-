#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
ElementType Median(ElementType A[], int N)
{
	int i, j, gap;
	ElementType t;
	for (gap = N / 2; gap > 0; gap /= 2)//����(�����ɴ�С)
		for (i = gap; i < N; i++)//������������������������
			for (j = i - gap; j >= 0 && A[j] > A[j + gap]; j -= gap)//ʵ�����ڵĲ���
			{
				t = A[j];
				A[j] = A[j + gap];
				A[j + gap] = t;
			}
	return A[N / 2];
}