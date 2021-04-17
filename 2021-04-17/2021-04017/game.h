#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>

#define ROW  8
#define CLO  8
#define NUM 10
#define ROWS ROW+2
#define CLOS CLO+2

void InitialArr(char arr[ROWS][CLOS],int x,int y,char c);
void DisplayArr(char arr[ROWS][CLOS], int x, int y,int p);
void CreateMine(char arr[ROWS][CLOS], int num);
void Player(char arr1[ROWS][CLOS], char arr2[ROWS][CLOS]);
void sum(char mine[ROWS][CLOS], char show[ROWS][CLOS], int x, int y);
