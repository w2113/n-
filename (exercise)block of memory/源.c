#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>
#include<string.h>
void* my_memcpy(void* dest, const void* src, size_t n)
{
	assert(dest && src);
	char* e1 = (char*)dest;
	char* e2 = (char*)src;
	while (n--)
	{
		*e1 = *e2;
		e1++;
		e2++;
	}
	return dest;
}
void* my_memmove(void* dest, const void* src, size_t n)
{
	assert(dest && src);
	char* e1 = (char*)dest;
	char* e2 = (char*)src;
	if (e1 < e2)
	{
		while (n--)
		{
			*e1 = *e2;
			e1++;
			e2++;
		}
	}
	else
	{
		while (n--)
		{
			*(e1 + n) = *(e2 + n);
		}
	}
	return dest;
}
//void* my_memmove(void* s1, const void* s2, size_t n)
//{
//	void* ret = s1;
//	assert(s1 && s2);
//	if (s1 < s2)
//	{
//		while (n--)
//		{
//			*(char*)s1 = *(char*)s2;
//			s1 = (char*)s1 + 1;
//			s2 = (char*)s2 + 1;
//		}
//	}
//	else
//	{
//		while (n--)
//		{
//			*((char*)s1 + n) = *((char*)s2 + n);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a2[20] = { 0 };
//	memcpy(a1, a1+2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a1[i]);
//	}
//	return 0;
//}


//my_memcpy(a2, a1, 20);
	//my_memmove(a1, a1 + 2, 20);


int main()
{
	char str1[] = "hello world";
	char str2[] = "hells world";
	printf("%d", memcmp(str1, str2, 5));
	return 0;
}