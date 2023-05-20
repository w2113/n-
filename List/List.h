#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct LTNode
{
	int data;
	struct LTNode* next;
	struct LTNode* prev;
}LTNode;
LTNode* ListInit();
void ListPrint(LTNode* head);
void ListPushBack(LTNode* head, int x);
void ListPopBack(LTNode* head);
void ListPushFront(LTNode* head, int x);
void ListPopFront(LTNode* head);
LTNode* ListFind(LTNode* head, int x);
void ListInsert(LTNode* pos, int x);
void ListErase(LTNode* pos);
void ListDestroy(LTNode* head);