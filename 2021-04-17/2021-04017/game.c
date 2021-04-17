#define _CRT_SECURE_NO_WARNINGS 10

#include "game.h"

static int r = 0, c = 0;
static int nums = 0;

//初始化数组
//arr：初始化需要的数组
//x、y:需初始化的行和列(接收所有行和列）
//c 初始化的内容
void InitialArr(char arr[ROWS][CLOS], int x, int y, char c){

	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			arr[i][j] = c;
		}
	}

}

//打印数组
//arr：打印需要的数组
//x、y:需打印的行和列(接收所有行和列）
//p=非0 只需打印玩家所看内容
//p=0 打印所有
void DisplayArr(char arr[ROWS][CLOS], int x, int y, int p){
	
	if (p ==0){
		for (int i = 0; i <= ROWS; i++){
			printf("%d ", i);
		}
		printf("\n");
		for (int i = 0; i < x; i++){
			printf("%d ",i+1);
			for (int j = 0; j < y; j++){
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
	}
	else{

		for (int i = 0; i <= ROW; i++){
			printf("%d ", i);
		}
		printf("\n");
		for (int i = 1; i < x-1; i++){
			printf("%d ", i);
			for (int j = 1; j < y-1; j++){
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
	}
	
}

//地雷初始化
//arr：地雷初始化需要的数组
//m 初始化地雷的个数
void CreateMine(char arr[ROWS][CLOS],  int num){

	
	
	
	while (num){
		r = rand() % (ROW) + 1;
		c = rand() % (CLO) + 1;
		if (arr[r][c] == 'M'){
			arr[r][c] = 'N';
			
			num--;
		}

		
	}


}
//玩家玩游戏
void Player(char mine[ROWS][CLOS], char show[ROWS][CLOS]){
	static int r = 0, c = 0;
	while (1){
		if ()
		printf("请输入坐标(用空格隔开)>");
		scanf("%d %d", &r, &c);
		if (r<1 || r>ROW || c<1 || c>CLO){
			
			printf("\n**************************\n");
			printf("***输入有误，请重新输入！***\n");
			printf("**************************\n\n");
			continue;
		}
		char cha = mine[r][c];
		if (cha == 'N'){
			printf("\n**************************\n");
			printf("***踩到炸弹，游戏结束！***\n");
			printf("**************************\n\n");
			
			break;
		}
		else if (cha == 'M'){
			
			sum(mine,show,r,c);
			DisplayArr(show, ROWS, CLOS,1);
			DisplayArr(mine, ROWS, CLOS, 1);
		}

	}

}

////计算周围8个格子存在地雷的个数
//void sum(char mine[ROWS][CLOS], char show[ROWS][CLOS], int x, int y){
//	char count = '0';
//	if (x <1 || x>ROWS - 2 || y<1 || x>CLOS - 2	|| mine[x][y] == 'N'){
//		return;
//	}
//
//	int r1c1 = mine[x-1][y-1];
//	int r1c2 = mine[x-1][y];
//	int r1c3 = mine[x-1][y+1];
//	int r2c1 = mine[x][y-1];
//	int r2c3 = mine[x][y+1];
//	int r3c1 = mine[x+1][y-1];
//	int r3c2 = mine[x+1][y];
//	int r3c3 = mine[x+1][y+1];
//	
//	count = r1c1 + r1c2 + r1c3 + r2c1 + r2c3 + r3c1 + r3c2 + r3c3 - (8 * 'M')+'0';
//	show[x][y] = (count == 'M' ? ' ' : (count == '0' ? ' ':count));
//	DisplayArr(show, ROWS, CLOS, 1);
//	sum(mine, show,x-1,y);
//	
//
//	sum(mine, show, x , y-1);
//	sum(mine, show, x + 1, y);
//	sum(mine, show, x, y + 1);
//}



//计算周围8个格子存在地雷的个数
void sum(char mine[ROWS][CLOS], char show[ROWS][CLOS], int x, int y){
	char count = '0';
	if (x <1 || x>ROWS - 2 || y<1 || x>CLOS - 2 || mine[x][y] == 'N' ){
		return;
	}

	int r1c1 = mine[x - 1][y - 1];
	int r1c2 = mine[x - 1][y];
	int r1c3 = mine[x - 1][y + 1];
	int r2c1 = mine[x][y - 1];
	int r2c3 = mine[x][y + 1];
	int r3c1 = mine[x + 1][y - 1];
	int r3c2 = mine[x + 1][y];
	int r3c3 = mine[x + 1][y + 1];

	count = r1c1 + r1c2 + r1c3 + r2c1 + r2c3 + r3c1 + r3c2 + r3c3 - (8 * 'M') + '0';
	/*if (count > '1'){
		show[x][y] = (count == 'M' ? ' ' : (count == '0' ? ' ' : count));
		return;
	}*/
	show[x][y] = (count == 'M' ? ' ' : (count == '0' ? ' ' : count));

	
	


	if (show[(x - 1)][y] == '*' && (show[(x + 1)][y] == '*' || show[(x + 1)][y] == ' ' || show[(x + 1)][y] == 'M')){
		
		sum(mine, show, x - 1, y);
		
	}
	if (show[x][(y - 1)] == '*' && (show[(x)][y + 1] == '*' || show[(x)][y + 1] == ' ' || show[(x)][y + 1] == 'M')){
		sum(mine, show, x, y - 1);
	}
	if (show[(x + 1)][y] == '*' && (show[(x - 1)][y] == '*' || show[(x - 1)][y] == ' ' || show[(x - 1)][y] == 'M')){
		sum(mine, show, x + 1, y);
	}
	if (show[(x)][(y + 1)] == '*' && (show[(x)][y - 1] == '*' || show[(x)][y - 1] == ' ' || show[(x)][y - 1] == 'M')){
		sum(mine, show, x, y + 1);
	}

}