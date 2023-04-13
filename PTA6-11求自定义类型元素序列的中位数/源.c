#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
ElementType Median(ElementType A[], int N)
{
	int i, j, gap;
	ElementType t;
	for (gap = N / 2; gap > 0; gap /= 2)//分组(增量由大到小)
		for (i = gap; i < N; i++)//各组依次在组内做插入排序
			for (j = i - gap; j >= 0 && A[j] > A[j + gap]; j -= gap)//实现组内的插入
			{
				t = A[j];
				A[j] = A[j + gap];
				A[j + gap] = t;
			}
	return A[N / 2];
}