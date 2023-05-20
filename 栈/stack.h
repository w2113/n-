#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
// 支持动态增长的栈
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