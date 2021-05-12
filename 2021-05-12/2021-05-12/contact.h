#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

#define MAX_LIST 10000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_DeL 11
#define MAX_ADDR 50
#define DEFAULTSZ 3

enum{
	EXIT,
	ADD,
	DEL,
	FIND,
	MODIFY,
	SHOW,
	SORT

};

struct PerInfo{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char del[MAX_DeL];
	char addr[MAX_ADDR];
};

struct Contact{
	struct PerInfo* list;
	//指针位置的记录
	int size;
	//数组总容量
	int capacity;

};


//初始化通讯录
void InistCon(struct Contact* con);
//添加一条通讯信息
void AddPerInfo(struct Contact* con);
//展示通讯信息
void ShowInfo(const struct Contact* con);
//删除指定姓名的通讯录信息
void DelInfo( struct Contact* con);
//寻找指定姓名的通讯录信息
void FindInfo(const struct Contact* con);
//修改指定姓名的通讯录信息
void ModInfo( struct Contact* con);
//根据姓名排序
void Sort(struct Contact* con);




