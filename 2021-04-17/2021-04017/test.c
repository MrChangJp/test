#define _CRT_SECURE_NO_WARNINGS 10
#include "game.h"


void game(){

	char mine[ROWS][ROWS] = { '0' };
	char show[ROWS][ROWS] = { '0' };
	//��ʼ������
	InitialArr(mine ,ROWS,CLOS,'M');
	InitialArr(show, ROWS, CLOS, '*');
	//��ӡ��ʼ���õ�����
	//DisplayArr(mine, ROWS, CLOS,0);
	DisplayArr(show, ROWS, CLOS, 1);
	printf("\n");
	//��ʼ������
	CreateMine(mine,NUM);
	//��ӡ��ʼ���õĵ���
	//DisplayArr(mine, ROWS, CLOS, 0);

	//��Ҳµ���

	Player(mine, show);

	//��Ϸ������ʶ����

}


void menu(){
	printf("**************************\n");
	printf("***  1��ɨ��  0���˳�  ***\n");
	printf("**************************\n");
}

void test(){
	srand((size_t)time(NULL));
	int input = 0;

	do{
		menu();
		printf("����������ѡ��>");
		scanf("%d", &input);

		switch (input){
			case 1: game();
				break;
			case 0: printf("��Ϸ�˳�~�ټ���\n");
				break;
			default:printf("�����������������룡\n"); Sleep(1000);
				break;
		}


	} while (input);




}

int main(){

	test();

	return 0;
}