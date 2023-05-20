#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<assert.h>
//size_t--unsigned int
size_t my_strlen(const char* p)
{
	//aseert(p != NULL);
	assert(p);//µÈ¼Û
	size_t count = 0;
	while (*p++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "I Love You";
	//int len = strlen(arr);
	//printf("%d\n",len);
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}