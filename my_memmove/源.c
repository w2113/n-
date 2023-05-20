#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* s1, const void* s2, size_t n)
{
	void* ret = s1;
	assert(s1 && s2);
	if (s1 < s2)
	{
		while (n--)
		{
			*(char*)s1 = *(char*)s2;
			s1 = (char*)s1 + 1;
			s2 = (char*)s2 + 1;
		}
	}
	else
	{
		while (n--)
		{
			*((char*)s1 + n) = *((char*)s2 + n);
		}
	}
	return ret;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	my_memmove(arr,arr+5,20);
	return 0;
}