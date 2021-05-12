#define _CRT_SECURE_NO_WARNINGS 10

#include "contact.h"

//打印指定一条通讯录信息
static void PrintInfo(const struct Contact* con, int index){
	printf("%s\t%d\t%s\t%s\t%s\n", (con->list)[index].name, (con->list)[index].age, (con->list)[index].sex, (con->list)[index].del, (con->list)[index].addr);
}

//初始化通讯录
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

//添加一条通讯信息
void AddPerInfo(struct Contact* con){
	assert(con);

	//判断是否需要扩容，需要则扩，不需则什么都不做
	NeedCapacity(con);

	printf("请输入姓名>");
	scanf("%s",(con->list)[con->size].name);
	printf("请输入年龄>");
	scanf("%d", &((con->list)[con->size].age));
	printf("请输入性别>");
	scanf("%s", (con->list)[con->size].sex);
	printf("请输入电话>");
	scanf("%s", (con->list)[con->size].del);
	printf("请输入地址>");
	scanf("%s", (con->list)[con->size].addr);

	(con->size)++;
}
//展示通讯信息
void ShowInfo(const struct Contact* con){
	if (con->size == 0){
		printf("通讯录内容为空！\n");
	}
	else{
		int i = 0;
		printf("姓名\t年龄\t性别\t电话\t地址\n");
		for (i = 0; i < con->size; i++){
			PrintInfo(con, i);
		}
	}
	

}


//根据姓名查找通讯录信息，return -1 未查找到
static int Find(const struct Contact* con,const char name[MAX_NAME]){

	int i = 0;
	for (i = 0; i < con->size; i++){
		if (strcmp(con->list[i].name, name) == 0){
			return i;
		}
	}
	return -1;

}

//删除指定姓名的通讯录信息
void DelInfo( struct Contact* con){
	char name[MAX_NAME];
	printf("请输入需要删除姓名>");
	scanf("%s", &name);
	int index = Find(con, name);
	if (index == -1){
		printf("未找到！\n");
	}
	else{
		char* conName = (con->list[index].name);
		char* conAfterName = (con->list[index + 1].name);
		int moveSize = (sizeof(con->list[0])*(con->size - index));
		memmove(conName, conAfterName, moveSize);
		con->size--;
	}
}
//寻找指定姓名的通讯录信息
void FindInfo(const struct Contact* con){
	char name[MAX_NAME];
	printf("请输入需要查找的姓名>");
	scanf("%s", &name);
	int index = Find(con, name);
	if (index == -1){
		printf("未找到！\n");
	}
	else{
		PrintInfo(con, index);
	}
}
//修改姓名
static void ModifyNames(struct Contact* con1, int index){
	char name[MAX_NAME];
	printf("请输入需要修改信息的姓名>");
	scanf("%s", &name);
	char* mess = strerror(errno);
	if (!mess){
		printf(mess);
		return;
	}
	strncpy(con1->list[index].name, name, MAX_NAME);

}

//修改年龄
void ModifyAge(struct Contact* con, int index){
	int age;
	printf("请输入需要修改信息的年龄>");
	scanf("%d", &age);
	char* mess = strerror(errno);
	if (!mess){
		printf(mess);
		return;
	}

	if (age<0 || age>150){
		printf("请检年龄是否输入错误！");
		return;
	}

	con->list[index].age = age;
	
}

//修改性别
void ModifySex(struct Contact* con, int index){
	char sex[MAX_SEX];
	printf("请输入需要修改信息的性别>");
	scanf("%s", sex);
	char* mess = strerror(errno);
	if (!mess){
		printf(mess);
		return;
	}
	strncpy(con->list[index].sex, sex, MAX_SEX);
	
}

//修改手机号
void ModifyDel(struct Contact* con, int index){
	char del[MAX_DeL];
	printf("请输入需要修改信息的手机号>");
	scanf("%s", del);
	char* mess = strerror(errno);
	if (!mess){
		printf(mess);
		return;
	}
	strncpy(con->list[index].del, del, MAX_DeL);

}

//修改手机号
void ModifyAddr(struct Contact* con, int index){
	char addr[MAX_ADDR];
	printf("请输入需要修改信息的地址>");
	scanf("%s", addr);
	char* mess = strerror(errno);
	if (!mess){
		printf(mess);
		return;
	}
	strncpy(con->list[index].addr, addr, MAX_ADDR);
}


//修改指定姓名的通讯录信息
void ModInfo( struct Contact* con){
	char name[MAX_NAME];
	printf("请输入需要修改信息的姓名>");
	scanf("%s", &name);
	int index = Find(con, name);
	if (index == -1){
		printf("未找到！\n");
	}
	else{
		printf("********************************************\n");
		printf("******     1.修改姓名     2.修改年龄  ******\n");
		printf("******     3.性别        4.手机号     ******\n");
		printf("******     5.地址        6.退出修改   ******\n");
		printf("********************************************\n");

		int input = 0;
		printf("请输入您的选项>");
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
		case 0:printf("退出修改成功！\n");
			break;
		default:printf("输入有误，请重新输入！\n");
			break;

		}


	}
}

int OrderBy(const void* e1,const void* e2){

	struct PerInfo* name1 = (struct PerInfo*)e1;
	struct PerInfo* name2 = (struct PerInfo*)e2;
	return strcmp(name1->name, name2->name);
	

}

//根据姓名排序
void Sort( struct Contact* con){
//	int sz = sizeof(con->list) / sizeof(con->list[0]);
	int arr1[10] = { 0 };
	struct PerInfo* list = con->list;
	int sz =  sizeof(con->list[0]);
	qsort(con->list, con->size, sizeof(con->list[0]), OrderBy);
}