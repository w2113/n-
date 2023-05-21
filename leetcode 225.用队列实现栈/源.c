#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
typedef struct QNode//���нڵ�
{
    int data;
    struct QNode* next;
}QNode;
typedef struct Queue//����
{
    QNode* front;
    QNode* tail;
}Queue;
//��ʼ��
void QueueInit(Queue* queue);
//�����Ƿ�Ϊ��
bool QueueEmpty(Queue* queue);
//����
void QueuePush(Queue* queue, int x);
//����
void QueuePop(Queue* queue);
//����ͷ��Ԫ��
int QueueTop(Queue* queue);
//����β��Ԫ��
int QueueBack(Queue* queue);
//������ЧԪ�ظ���
int QueueSize(Queue* queue);
//���ٶ���
void QueueDestroy(Queue* queue);

void QueueInit(Queue* queue)//��ʼ��
{
    assert(queue);
    queue->front = NULL;
    queue->tail = NULL;
}
//�����Ƿ�Ϊ��
bool QueueEmpty(Queue* queue)
{
    assert(queue);
    return queue->tail == NULL;
}
//����
void QueuePush(Queue* queue, int x)
{
    assert(queue);
    QNode* newnode = (QNode*)malloc(sizeof(QNode));
    assert(newnode);
    newnode->data = x;
    newnode->next = NULL;
    if (queue->tail == NULL)
    {
        queue->front = queue->tail = newnode;
    }
    else
    {
        queue->tail->next = newnode;
        queue->tail = newnode;
    }
}
//����
void QueuePop(Queue* queue)
{
    assert(queue);
    QNode* next = queue->front->next;
    free(queue->front);
    queue->front = next;
    if (queue->front == NULL)
    {
        queue->tail = NULL;
    }
}
//����ͷ��Ԫ��
int QueueTop(Queue* queue)
{
    assert(queue);
    assert(queue->front);
    return queue->front->data;
}
//����β��Ԫ��
int QueueBack(Queue* queue)
{
    assert(queue);
    assert(queue->tail);
    return queue->tail->data;
}
//������ЧԪ�ظ���
int QueueSize(Queue* queue)
{
    assert(queue);
    int size = 0;
    QNode* cur = queue->front;
    while (cur != NULL)
    {
        ++size;
        cur = cur->next;
    }
    return size;
}
//���ٶ���
void QueueDestroy(Queue* queue)
{
    assert(queue);
    QNode* next = queue->front;
    while (next != NULL)
    {
        next = queue->front->next;
        free(queue->front);
        queue->front = next;
    }
    queue->tail = NULL;
}

typedef struct
{
    Queue q1;
    Queue q2;
} MyStack;
//����ջ
MyStack* myStackCreate()
{
    MyStack* mystack = (MyStack*)malloc(sizeof(MyStack));
    assert(mystack);
    QueueInit(&mystack->q1);
    QueueInit(&mystack->q2);
    return mystack;
}
//ѹջ
void myStackPush(MyStack* obj, int x)
{
    assert(obj);
    if (!QueueEmpty(&obj->q1))
    {
        QueuePush(&obj->q1, x);
    }
    else
    {
        QueuePush(&obj->q2, x);
    }
}
//��ջ
int myStackPop(MyStack* obj)
{
    assert(obj);
    Queue* EmptyQueue = &obj->q1;
    Queue* NonEmptyQueue = &obj->q2;
    if (!QueueEmpty(EmptyQueue))
    {
        EmptyQueue = &obj->q2;
        NonEmptyQueue = &obj->q1;
    }
    while (QueueSize(NonEmptyQueue) > 1)
    {
        QueuePush(EmptyQueue, QueueTop(NonEmptyQueue));
        QueuePop(NonEmptyQueue);
    }
    int top = QueueTop(NonEmptyQueue);
    QueuePop(NonEmptyQueue);
    return top;
}
//ջ��Ԫ��
bool myStackEmpty(MyStack* obj);
int myStackTop(MyStack* obj)
{
    assert(obj);
    assert(!myStackEmpty(obj));
    if (!QueueEmpty(&obj->q1))
    {
        return QueueBack(&obj->q1);
    }
    else
    {
        return QueueBack(&obj->q2);
    }
}
//ջ�Ƿ�Ϊ��
bool myStackEmpty(MyStack* obj)
{
    assert(obj);
    return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}
//����ջ
void myStackFree(MyStack* obj)
{
    assert(obj);
    QueueDestroy(&obj->q1);
    QueueDestroy(&obj->q2);
    free(obj);
    obj = NULL;
}
/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/