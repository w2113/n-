#include"Queue.h"
void TestQueue1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q,1);
	QueuePush(&q,2);
	QueuePush(&q,3);
	QueuePush(&q,4);
	//QueuePop(&q);
	//QueuePop(&q);
	while (!QueueEmpty(&q))
	{
		Data front = QueueFront(&q);
		printf("%d ", front);
		QueuePop(&q);
	}
	QueuePush(&q, 4);
	QueuePush(&q, 4);
	QueueDestroy(&q);
}
int main()
{
	TestQueue1();
	return 0;
}