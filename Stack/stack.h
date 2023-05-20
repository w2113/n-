#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>//布尔值头文件
typedef int Data;
typedef struct stack
{
	Data* a;
	int top;
	int capacity;
}ST;
void StackInit(ST* ps);
void StackDestroy(ST* ps);
void StackPush(ST* ps,Data x);
void StackPop(ST* ps);
Data StackTop(ST* ps);
int StackSize(ST* ps);
bool StackEmpty(ST* ps);