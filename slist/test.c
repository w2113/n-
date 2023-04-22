#include"slist.h"
void test1()
{
	SListNode* p = NULL;
	SListPushFront(&p, 1);
	//SListPushFront(&p, 2);
	//SListPushFront(&p, 3);
	SListPrint(p);
	//SListPushBack(&p, 5);
	//SListPushBack(&p, 4);
	//SListPushBack(&p, 3);
	//SListPopFront(&p);
	SListPopBack(&p);
	SListPrint(p);

}
void test2()
{
	SListNode* p = NULL;
	//SListPushFront(&p, 1);
	SListPushFront(&p, 2);
	//SListPushFront(&p, 3);
	SListPrint(p);
	SListNode* pos = SListFind(p, 2);
	SListInsertAfter(pos, 5);
	SListPrint(p);
	SListEraseAfter(pos);
	SListPrint(p);
	SListDestroy(&p);
}
int main()
{
	//test1();
	test2();
	return 0;
}