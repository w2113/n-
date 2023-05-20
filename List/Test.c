#include"List.h"
void TestList1()
{
	LTNode* p = ListInit();
	ListPushBack(p, 1);
	ListPushBack(p, 2);
	ListPushBack(p, 3);
	ListPushBack(p, 4);
	ListPopBack(p);
	ListPrint(p);
}
void TestList2()
{
	LTNode* p = ListInit();
	ListPushFront(p, 1);
	ListPushFront(p, 2);
	ListPushFront(p, 3);
	ListPushFront(p, 4);
	ListPrint(p);
}
void TestList3()
{
	LTNode* p = ListInit();
	ListPushFront(p, 1);
	ListPushFront(p, 2);
	ListPushFront(p, 3);
	ListPushFront(p, 5);
	ListPushFront(p, 6);
	ListPushFront(p, 7);
	ListPushFront(p, 8);
	LTNode* pos = ListFind(p, 2);
	if (pos)
	{
		ListErase(pos);
	}
	ListPrint(p);
	ListPopBack(p);
	ListPopBack(p);
	ListPopFront(p);
	ListPopFront(p);
	ListPrint(p);
}
void TestList4()
{
	LTNode* p = ListInit();
	ListPushFront(p, 1);
	ListPushFront(p, 2);
	ListPushFront(p, 3);
	ListPushFront(p, 5);
	ListPushFront(p, 6);
	ListDestroy(p);
	p = NULL;
	ListPrint(p);
}
int main()
{
	//TestList1();
	//TestList2();
	//TestList3();
	TestList4();
	return 0;
}