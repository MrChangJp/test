#define _CRT_SECURE_NO_WARNINGS 10

#include "game.h"


void Game(){

	char arr[ROW][COLUMN] = { 0 };
	InstallArr(arr, ROW, COLUMN);
	showArr(arr, ROW, COLUMN);
	char tag = ' ';
	while (1){
		
		PlayWrite(arr, ROW, COLUMN);
		showArr(arr, ROW, COLUMN);
		tag = Jury(arr, ROW, COLUMN);
		if (tag != 'C'){
			
			break;
		}

		CompWrite(arr, ROW, COLUMN);
		showArr(arr, ROW, COLUMN);
		tag = Jury(arr, ROW, COLUMN);
		if (tag != 'C'){
			
			break;
		}

	}

	if (tag == '*'){
		printf("����ʤ��\n");
	}
	else if (tag == '#'){
		printf("�����˻�ʤ��\n");
	}
	else{
		printf("ƽ�֣�\n");
	}

}

void nume(){
	printf("**************************\n");
	printf("***  1��������  0���˳�***\n");
	printf("**************************\n");
}

void test(){


	int input = 0;
	do{
		nume();
		printf("����������ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ��\n");
			Game();
			break;
		case 0:printf("�ټ���\n"); 
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);

}

int main(){
	srand((size_t)time(NULL));
	test();

	return 0;
}