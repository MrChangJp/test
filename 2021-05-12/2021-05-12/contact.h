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
	//ָ��λ�õļ�¼
	int size;
	//����������
	int capacity;

};


//��ʼ��ͨѶ¼
void InistCon(struct Contact* con);
//���һ��ͨѶ��Ϣ
void AddPerInfo(struct Contact* con);
//չʾͨѶ��Ϣ
void ShowInfo(const struct Contact* con);
//ɾ��ָ��������ͨѶ¼��Ϣ
void DelInfo( struct Contact* con);
//Ѱ��ָ��������ͨѶ¼��Ϣ
void FindInfo(const struct Contact* con);
//�޸�ָ��������ͨѶ¼��Ϣ
void ModInfo( struct Contact* con);
//������������
void Sort(struct Contact* con);




