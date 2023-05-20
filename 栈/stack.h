#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
// ֧�ֶ�̬������ջ
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;		// ջ��
	int _capacity;  // ���� 
}Stack;

void StackInit(Stack* ps);// ��ʼ��ջ 

void StackPush(Stack* ps, STDataType data);// ��ջ 

void StackPop(Stack* ps);// ��ջ 

STDataType StackTop(Stack* ps);// ��ȡջ��Ԫ�� 

int StackSize(Stack* ps);// ��ȡջ����ЧԪ�ظ��� 

int StackEmpty(Stack* ps);// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 

void StackDestroy(Stack* ps);// ����ջ 