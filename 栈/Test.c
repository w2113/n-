#include"stack.h"
void test1()
{
	Stack p;
	StackInit(&p);
	StackPush(&p, 1);
	StackPush(&p, 2);
	StackPush(&p, 3);
	StackPop(&p);
	while (!StackEmpty(&p))
	{
		printf("%d ", StackTop(&p));
		StackPop(&p);
	}
	StackDestroy(&p);
}
int main()
{
	test1();
	return 0;
}