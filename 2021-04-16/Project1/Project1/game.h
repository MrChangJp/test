#include<stdio.h> 
#include<time.h>

#define ROW 3
#define COLUMN 3


void Game();
void InstallArr(char arr[ROW][COLUMN],int row,int column);
void showArr(char arr[ROW][COLUMN], int row, int column);
void PlayWrite(char arr[ROW][COLUMN], int row, int column);
void CompWrite(char arr[ROW][COLUMN], int row, int column);
char Jury(char arr[ROW][COLUMN], int row, int column);
char func1(char);