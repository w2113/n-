#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// 栈顶
	int _capacity;  // 容量 
}Stack;

void StackInit(Stack* ps);// 初始化栈 

void StackPush(Stack* ps, STDataType data);// 入栈 

void StackPop(Stack* ps);// 出栈 

STDataType StackTop(Stack* ps);// 获取栈顶元素 

int StackSize(Stack* ps);// 获取栈中有效元素个数 

int StackEmpty(Stack* ps);// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 

void StackDestroy(Stack* ps);// 销毁栈 
void StackInit(Stack* ps)
{
	assert(ps);
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	if (ps->_top == ps->_capacity)
	{
		int newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
		STDataType* p = realloc(ps->_a, sizeof(STDataType) * newcapacity);
		assert(p);
		ps->_a = p;
		ps->_capacity = newcapacity;
	}
	ps->_a[ps->_top] = data;
	ps->_top++;
}
void StackPop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->_top--;
}
STDataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->_a[ps->_top - 1];
}
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}
int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->_top == 0;
}
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}
typedef struct {

	Stack push;
	Stack pop;
} MyQueue;


MyQueue* myQueueCreate()
{
	MyQueue* q = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&q->push);
	StackInit(&q->pop);
	return q;
}

void myQueuePush(MyQueue* obj, int x) {
	StackPush(&obj->push, x);
}

int myQueuePop(MyQueue* obj) {
	if (StackEmpty(&obj->pop))
	{
		while (!StackEmpty(&obj->push))
		{
			StackPush(&obj->pop, StackTop(&obj->push));
			StackPop(&obj->push);
		}
	}
	int front = StackTop(&obj->pop);
	StackPop(&obj->pop);
	return front;
}

int myQueuePeek(MyQueue* obj) {
	if (StackEmpty(&obj->pop))
	{
		while (!StackEmpty(&obj->push))
		{
			StackPush(&obj->pop, StackTop(&obj->push));
			StackPop(&obj->push);
		}
	}
	return StackTop(&obj->pop);
}

bool myQueueEmpty(MyQueue* obj) {
	return StackEmpty(&obj->pop) && StackEmpty(&obj->push);
}

void myQueueFree(MyQueue* obj) {
	StackDestroy(&obj->push);
	StackDestroy(&obj->pop);
	free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/