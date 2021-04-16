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
		printf("您获胜！\n");
	}
	else if (tag == '#'){
		printf("机器人获胜！\n");
	}
	else{
		printf("平局！\n");
	}

}

void nume(){
	printf("**************************\n");
	printf("***  1、三子棋  0、退出***\n");
	printf("**************************\n");
}

void test(){


	int input = 0;
	do{
		nume();
		printf("请输入您的选项>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("游戏开始！\n");
			Game();
			break;
		case 0:printf("再见！\n"); 
			break;
		default:
			printf("输入有误！请重新输入\n");
			break;
		}
	} while (input);

}

int main(){
	srand((size_t)time(NULL));
	test();

	return 0;
}