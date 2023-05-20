#include"queue.h"
void test1()
{
	Queue p;
	QueueInit(&p);
	QueuePush(&p, 1);
	QueuePush(&p, 2);
	QueuePush(&p, 3);
	QueuePush(&p, 4);
	//QueuePop(&p);
	//QueuePop(&p);
	while (!QueueEmpty(&p))
	{
		QDataType front = QueueFront(&p);
		printf("%d ", front);
		QueuePop(&p);
	}
	QueueDestroy(&p);
}
int main()
{
	test1();
	return 0;
}