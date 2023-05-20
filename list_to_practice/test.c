#include"list.h"
void test1()
{
	n* plist = NULL;
	SListpushBack(&plist, 1);
	SListpushBack(&plist, 2);
	SListpushBack(&plist, 3);
	SListpushBack(&plist, 4);
	SListprint(plist);
}
void test2()
{
	n* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListprint(plist);
}
void test3()
{
	n* plist = NULL;
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListprint(plist);
}
void test4()
{
	n* plist = NULL;
	SListPushFront(&plist,1);
	SListPushFront(&plist,2);
	SListPushFront(&plist,2);
	SListPushFront(&plist,2);
	SListPushFront(&plist,3);
	SListPushFront(&plist,4);
	n* pos = SListFind(plist, 2);
	int i = 1;
	while (pos)
	{
		printf("第%d个pos节点:%p->%d\n",i++,pos,pos->data);
		pos = SListFind(pos->next,2);
	}
	pos= SListFind(plist, 3);
	if (pos)
	{
		pos->data = 30;
	}
	SListprint(plist);
}
void test5()
{
	n* plist = NULL;
	SListpushBack(&plist, 1);
	SListpushBack(&plist, 2);
	SListpushBack(&plist, 3);
	SListpushBack(&plist, 4);
	
	n*pos= SListFind(plist, 1);
	if (pos)
	{
		SListInsertAfter(pos, 30);//后插入
		//SListInsert(&plist, pos, 30);//前插入
	}
	SListprint(plist);
}
void test6()
{
	n* plist = NULL;
	SListpushBack(&plist, 1);
	SListpushBack(&plist, 2);
	SListpushBack(&plist, 3);
	//SListpushBack(&plist, 4);
	n* pos = SListFind(plist, 1);
	if (pos)
	{
		SListErase(&plist, pos);
		//SListEraseAfter(pos);
	}
	SListprint(plist);
}
void test7()
{
	n* plist = NULL;
	SListpushBack(&plist, 1);
	SListpushBack(&plist, 2);
	SListpushBack(&plist, 3);
	//SListDestory(&plist);
	SListprint(plist);
}
int main()
{
	//test1();//PushBack
	//test2();//PushFront,PopBack
	//test3();//PopFront
	//test4();//Find
	//test5();//Insert
	//test6();//Erase
	test7();//Destory
	return 0;
}