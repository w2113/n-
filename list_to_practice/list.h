#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int STLDate;
typedef struct node
{
	STLDate data;
	struct node* next;
}n;
void SListprint(n* phead);
void SListpushBack(n** phead, STLDate x); 
void SListPushFront(n** phead, STLDate x);
void SListPopBack(n** phead);
void SListPopFront(n** phead);
n* SListFind(n* phead, STLDate x);
void SListInsert(n** phead, n* pos, STLDate x);
void SListInsertAfter(n* pos, STLDate x);
void SListErase(n** phead, n*pos);
void SListEraseAfter(n* pos);
void SListDestory(n** phead);
