#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
#define max_name 8
#define max_sex 4
#define max_tel 16
#define max_address 24
typedef struct Data
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tel[max_tel];
	char address[max_address];
}Data;
typedef struct Contact
{
	Data data[MAX];
	int sz;
}Contact;
void init_contact(Contact*);
void add_contact( Contact*);
void show_contact(const Contact*);
void find_contact(const Contact*);
void del_contact(Contact*);
void modify_contact(Contact*);
void sort_contact(Contact*);
void empty_contact(Contact*);