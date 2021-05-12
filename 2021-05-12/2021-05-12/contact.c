#define _CRT_SECURE_NO_WARNINGS 10

#include "contact.h"

//��ӡָ��һ��ͨѶ¼��Ϣ
static void PrintInfo(const struct Contact* con, int index){
	printf("%s\t%d\t%s\t%s\t%s\n", (con->list)[index].name, (con->list)[index].age, (con->list)[index].sex, (con->list)[index].del, (con->list)[index].addr);
}

//��ʼ��ͨѶ¼
void InistCon(struct Contact* con){
	assert(con);
	struct PerInfo * p = (struct PerInfo*)malloc(DEFAULTSZ*sizeof(struct PerInfo));
	if (p != NULL){
		con->list = p;
		con->capacity = DEFAULTSZ;
	}
	//memset(con->list, 0, sizeof(con->list));

	con->size = 0;

}

void NeedCapacity(struct Contact* con){

	if (con->capacity == con->size){
		struct PerInfo * p = (struct PerInfo *)realloc(con->list, (con->capacity + 2)*sizeof(struct PerInfo ));
		if (p != NULL){
			con->list = p;
			con->capacity += 2;
		}
	}
}

//���һ��ͨѶ��Ϣ
void AddPerInfo(struct Contact* con){
	assert(con);

	//�ж��Ƿ���Ҫ���ݣ���Ҫ������������ʲô������
	NeedCapacity(con);

	printf("����������>");
	scanf("%s",(con->list)[con->size].name);
	printf("����������>");
	scanf("%d", &((con->list)[con->size].age));
	printf("�������Ա�>");
	scanf("%s", (con->list)[con->size].sex);
	printf("������绰>");
	scanf("%s", (con->list)[con->size].del);
	printf("�������ַ>");
	scanf("%s", (con->list)[con->size].addr);

	(con->size)++;
}
//չʾͨѶ��Ϣ
void ShowInfo(const struct Contact* con){
	if (con->size == 0){
		printf("ͨѶ¼����Ϊ�գ�\n");
	}
	else{
		int i = 0;
		printf("����\t����\t�Ա�\t�绰\t��ַ\n");
		for (i = 0; i < con->size; i++){
			PrintInfo(con, i);
		}
	}
	

}


//������������ͨѶ¼��Ϣ��return -1 δ���ҵ�
static int Find(const struct Contact* con,const char name[MAX_NAME]){

	int i = 0;
	for (i = 0; i < con->size; i++){
		if (strcmp(con->list[i].name, name) == 0){
			return i;
		}
	}
	return -1;

}

//ɾ��ָ��������ͨѶ¼��Ϣ
void DelInfo( struct Contact* con){
	char name[MAX_NAME];
	printf("��������Ҫɾ������>");
	scanf("%s", &name);
	int index = Find(con, name);
	if (index == -1){
		printf("δ�ҵ���\n");
	}
	else{
		char* conName = (con->list[index].name);
		char* conAfterName = (con->list[index + 1].name);
		int moveSize = (sizeof(con->list[0])*(con->size - index));
		memmove(conName, conAfterName, moveSize);
		con->size--;
	}
}
//Ѱ��ָ��������ͨѶ¼��Ϣ
void FindInfo(const struct Contact* con){
	char name[MAX_NAME];
	printf("��������Ҫ���ҵ�����>");
	scanf("%s", &name);
	int index = Find(con, name);
	if (index == -1){
		printf("δ�ҵ���\n");
	}
	else{
		PrintInfo(con, index);
	}
}
//�޸�����
static void ModifyNames(struct Contact* con1, int index){
	char name[MAX_NAME];
	printf("��������Ҫ�޸���Ϣ������>");
	scanf("%s", &name);
	char* mess = strerror(errno);
	if (!mess){
		printf(mess);
		return;
	}
	strncpy(con1->list[index].name, name, MAX_NAME);

}

//�޸�����
void ModifyAge(struct Contact* con, int index){
	int age;
	printf("��������Ҫ�޸���Ϣ������>");
	scanf("%d", &age);
	char* mess = strerror(errno);
	if (!mess){
		printf(mess);
		return;
	}

	if (age<0 || age>150){
		printf("��������Ƿ��������");
		return;
	}

	con->list[index].age = age;
	
}

//�޸��Ա�
void ModifySex(struct Contact* con, int index){
	char sex[MAX_SEX];
	printf("��������Ҫ�޸���Ϣ���Ա�>");
	scanf("%s", sex);
	char* mess = strerror(errno);
	if (!mess){
		printf(mess);
		return;
	}
	strncpy(con->list[index].sex, sex, MAX_SEX);
	
}

//�޸��ֻ���
void ModifyDel(struct Contact* con, int index){
	char del[MAX_DeL];
	printf("��������Ҫ�޸���Ϣ���ֻ���>");
	scanf("%s", del);
	char* mess = strerror(errno);
	if (!mess){
		printf(mess);
		return;
	}
	strncpy(con->list[index].del, del, MAX_DeL);

}

//�޸��ֻ���
void ModifyAddr(struct Contact* con, int index){
	char addr[MAX_ADDR];
	printf("��������Ҫ�޸���Ϣ�ĵ�ַ>");
	scanf("%s", addr);
	char* mess = strerror(errno);
	if (!mess){
		printf(mess);
		return;
	}
	strncpy(con->list[index].addr, addr, MAX_ADDR);
}


//�޸�ָ��������ͨѶ¼��Ϣ
void ModInfo( struct Contact* con){
	char name[MAX_NAME];
	printf("��������Ҫ�޸���Ϣ������>");
	scanf("%s", &name);
	int index = Find(con, name);
	if (index == -1){
		printf("δ�ҵ���\n");
	}
	else{
		printf("********************************************\n");
		printf("******     1.�޸�����     2.�޸�����  ******\n");
		printf("******     3.�Ա�        4.�ֻ���     ******\n");
		printf("******     5.��ַ        6.�˳��޸�   ******\n");
		printf("********************************************\n");

		int input = 0;
		printf("����������ѡ��>");
		scanf("%d", &input);
		switch (input){

		case 1:
			ModifyNames(con, index);
			break;
		case 2:ModifyAge(con, index);
			break;
		case 3:ModifySex(con, index);
			break;
		case 4:ModifyDel(con, index);
			break;
		case 5:ModifyAddr(con,index);
			break;
		case 6://Sort(&con);
			break;
		case 0:printf("�˳��޸ĳɹ���\n");
			break;
		default:printf("�����������������룡\n");
			break;

		}


	}
}

int OrderBy(const void* e1,const void* e2){

	struct PerInfo* name1 = (struct PerInfo*)e1;
	struct PerInfo* name2 = (struct PerInfo*)e2;
	return strcmp(name1->name, name2->name);
	

}

//������������
void Sort( struct Contact* con){
//	int sz = sizeof(con->list) / sizeof(con->list[0]);
	int arr1[10] = { 0 };
	struct PerInfo* list = con->list;
	int sz =  sizeof(con->list[0]);
	qsort(con->list, con->size, sizeof(con->list[0]), OrderBy);
}