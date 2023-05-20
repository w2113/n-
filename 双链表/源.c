#include"List.h"
void test1()
{
	ListNode* p=ListCreate();
	ListPushBack(p, 1);
	ListPushBack(p, 2);
	ListPushBack(p, 3);
	ListPushFront(p,4);
	
	ListPrint(p);
	ListDestory(p);
}
int main()
{
	test1();
	return 0;
}