#include"queue.h"
void QueueInit(Queue* q)
{
	assert(q);
	q->_front = NULL;
	q->_rear = NULL;
}
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	QNode* new = (QNode*)malloc(sizeof(QNode));
	assert(new);
	new->_data = data;
	new->_next = NULL;
	if (q->_front == NULL)
	{
		q->_front = q->_rear = new;
	}
	else
	{
		q->_rear->_next = new;
		q->_rear = new;
	}
}
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	QNode* front_next = q->_front->_next;
	free(q->_front);
	q->_front = front_next;
	if (q->_front == NULL)
	{
		q->_rear == NULL;
	}
}
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->_front->_data;
}
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->_rear->_data;
}
int QueueSize(Queue* q)
{
	assert(q);
	int n = 0;
	QNode* cur = q->_front;
	while (cur)
	{
		n++;
		cur = cur->_next;
	}
	return n;
}
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->_front == NULL;
}
void QueueDestroy(Queue* q)
{
	assert(q);
	QNode* cur = q->_front;
	while (cur != NULL)
	{
		QNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	q->_front = q->_rear = NULL;
}