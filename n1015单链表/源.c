#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct node
{
	int num;
	struct node* next;
}node;
node* BuyLisNode(int x)
{
	node* new = (node*)malloc(sizeof(node));
	assert(new);
	new->num = x;
	new->next = NULL;
	return new;
}
void ListPrint(node*head)
{
	assert(head);
	node* cur = head;
	while (cur != NULL)
	{
		printf("%d ", cur->num);
		cur = cur->next;
	}
}
void ListPopback(node** head, int x)
{
	assert(head);
	node* new = BuyLisNode(x);
	assert(new);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		node* tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;
	}
	
}
void sort(node** head)
{
	int tmp = 0;
	for (int i = 1; i <= 5; i++)
	{
		node* cur = *head;
		node* n = cur->next;
		while (cur->next != NULL)
		{
			if (cur->num > n->num)
			{
				tmp = cur->num;
				cur->num = n->num;
				n->num = tmp;
			}
			cur = n;
			n = n->next;
		}
	}
}
int main()
{
	node* p = NULL;
	int m = 0;
	for (int i = 5; i > 0; i--)
	{
		scanf("%d", &m);
		ListPopback(&p, m);
	}
	sort(&p);
	ListPrint(p);
	return 0;
}