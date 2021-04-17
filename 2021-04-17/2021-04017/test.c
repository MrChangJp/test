#define _CRT_SECURE_NO_WARNINGS 10
#include "game.h"


void game(){

	char mine[ROWS][ROWS] = { '0' };
	char show[ROWS][ROWS] = { '0' };
	//初始化数组
	InitialArr(mine ,ROWS,CLOS,'M');
	InitialArr(show, ROWS, CLOS, '*');
	//打印初始化好的数组
	//DisplayArr(mine, ROWS, CLOS,0);
	DisplayArr(show, ROWS, CLOS, 1);
	printf("\n");
	//初始化地雷
	CreateMine(mine,NUM);
	//打印初始化好的地雷
	//DisplayArr(mine, ROWS, CLOS, 0);

	//玩家猜地雷

	Player(mine, show);

	//游戏结束标识！！

}


void menu(){
	printf("**************************\n");
	printf("***  1、扫雷  0、退出  ***\n");
	printf("**************************\n");
}

void test(){
	srand((size_t)time(NULL));
	int input = 0;

	do{
		menu();
		printf("请输入您的选项>");
		scanf("%d", &input);

		switch (input){
			case 1: game();
				break;
			case 0: printf("游戏退出~再见！\n");
				break;
			default:printf("输入有误请重新输入！\n"); Sleep(1000);
				break;
		}


	} while (input);




}

int main(){

	test();

	return 0;
}