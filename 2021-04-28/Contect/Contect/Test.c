#define _CRT_SECURE_NO_WARNINGS 10

#include "contact.h"


void menu(){
	printf("********************************************\n");
	printf("******     1.addInfo     2.delInfo    ******\n");
	printf("******     3.findInfo    4.modInfo    ******\n");
	printf("******     5.show        6.sort       ******\n");
	printf("******     0.exit                     ******\n");
	printf("********************************************\n");
}

int main(){

	struct Contact con;
	//��ʼ��ͨѶ¼
	InistCon(&con);

	int input = 0;

	do{
		menu();
		printf("����������ѡ��>");
		scanf("%d", &input);
		switch (input){

		case ADD:
			AddPerInfo(&con);
			break;
		case DEL:DelInfo(&con);
			break;
		case FIND:FindInfo(&con);
			break;
		case MODIFY:ModInfo(&con);
			break;
		case SHOW:ShowInfo(&con);
			break;
		case SORT:Sort(&con);
			break;
		case 0:printf("�ټ���\n");
			break;
		default:printf("�����������������룡\n");
			break;

		}

	} while (input);

}