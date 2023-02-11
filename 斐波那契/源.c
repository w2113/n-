#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
//int Fun(int n)//ตÝน้
//{
//    if (n <= 2)
//    {
//        return 1;
//    }
//    return Fun(n - 1) + Fun(n - 2);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", Fun(n));
//}
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	int sum = 0, prev = 1, cur = 1;
	for (int i = 3; i <= n; i++)
	{
		sum = prev + cur;
		prev = cur;
		cur = sum;
	}
	return cur;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	
}