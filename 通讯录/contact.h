#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max_name 20
#define max_sex 10
#define max_tele 12
#define max_addr 30
#define maxx 1000
#define default_sz 3
#define inc_sz 2
typedef struct peoinfo
{
	char name[max_name];
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
	int age;
}peoinfo;
//typedef struct contact//¾²Ì¬°æ±¾
//{
//	peoinfo data[max];
//	int sz;
//}contact;
typedef struct contact//¶¯Ì¬°æ±¾
{
	peoinfo *data;
	int sz;
	int capacity;
}contact;

void initcontact(contact* p);
void addcontact(contact* p);
void printcontact(const contact* p);
void delcontact(contact*p);
void searchcontact(contact* p);
void modifycontact(contact*p);
void destorycontact(contact* p);
void savecontact(contact* p);
void loadcontact(contact* p);
void checkcapacity(contact* p);
void sortcontact(contact* p);
