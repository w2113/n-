#include"SeqList.h"
void test1()
{
	SeqList T;
	SeqListInit(&T);
	SeqListPushBack(&T, 5);
	SeqListPushBack(&T, 7);
	SeqListPushBack(&T, 6);
	SeqListPushFront(&T, 3);
	SeqListPushFront(&T, 2);
	SeqListPushFront(&T, 1);
	SeqListPrint(&T);
	SeqListPopFront(&T);
	SeqListPopBack(&T);
	
	SeqListPrint(&T);
	SeqListDestroy(&T);
}
void test2()
{
	SeqList T;
	SeqListInit(&T);
	SeqListPushBack(&T, 5);
	SeqListPushBack(&T, 7);
	SeqListPushBack(&T, 6);
	SeqListPushFront(&T, 3);
	SeqListPushFront(&T, 2);
	SeqListPushFront(&T, 1);
	SeqListPrint(&T);
	SeqListPopFront(&T);
	SeqListPopBack(&T);
	SeqListPrint(&T);
	int pos = SeqListFind(&T, 3);
	printf("%d\n", pos);
	SeqListInsert(&T, 2, 9);
	SeqListPrint(&T);
	SeqListErase(&T, 3);
	SeqListPrint(&T);
	SeqListDestroy(&T);
}
int main()
{
	//test1();
	test2();
	return 0;
}