#define _CRT_SECURE_NO_WARNINGS 10
#include "game.h"



void InstallArr(char arr[ROW][COLUMN], int row, int column){
	
	for (int i = 0; i < row; i++){
		for (int j = 0; j < column; j++){
			arr[i][j] = ' ';
		}
	}

}


void showArr(char arr[ROW][COLUMN], int row, int column){


	for (int i = 0; i < row; i++){
		for (int j = 0; j < column; j++){
			printf(" %c ", arr[i][j]);
			if (j < column - 1){
				printf("|");
			}

		}
		printf("\n");
		if (i < row - 1){
			for (int j = 0; j < column; j++){
				printf("---");
				if (j < column - 1){
					printf("|");
				}
			}
			printf("\n");
		}
		
	}

}

//�������
void PlayWrite(char arr[ROW][COLUMN], int row, int column){

	int r = 0;
	int c = 0;
	while (1){

		printf("�������������ӵ����꣺>\n");
		scanf("%d%d",&r,&c);

		if (r - 1 >= 0 && r - 1 <= row && c - 1 >= 0 && c - 1 <= column ){

			if (arr[r-1][c-1] == ' '){
				arr[r-1][c-1] = '*';
				printf("�����>\n");
				break;
			}
			else{
				printf("��������������������ӣ����������룡\n");
			}
						
		}
		else{
			printf("�����������������룡");
		}


	}

}
//��������
void CompWrite(char arr[ROW][COLUMN], int row, int column){

	
	while (1){
		int r = rand() % row;
		int c = rand() % column;

		if (arr[r][c] == ' '){
			arr[r][c] = '#';
			printf("������>\n");
			break;
		}
	}
}

char func11(char e1){
	if (e1 == '*'){
		return '*';
	}
	else{
		return '#';
	}
}

//�ж���Ӯ
//'*' ���ʤ
//'#' ����ʤ
//'C' ����
//'D' ƽ��
char Jury(char arr[ROW][COLUMN], int row, int column){
	int i = 0, j = 0;
	//�С����Ƿ�һ��
	for (i = 0; i < row; i++){
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' '){
			
			return func11(arr[i][1]);
			
		}

		if (arr[0][i] == arr[1][i] && arr[2][i] == arr[1][i] && arr[1][i] != ' '){

			return func11(arr[1][i]);

		}
	}
	//�����Ƿ�һ��
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' '){
		
		return func11(arr[1][1]);
	}
	//�����Ƿ�һ��
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' '){

		return func11(arr[1][1]);
	
	}
	//�ж��Ƿ�Ϊƽ��
	for (i = 0; i < row;i++){
		for (j = 0; j < column; j++){
			if (arr[i][j] == ' ')
				return 'C';
		}
	}
	return 'D';

	



}