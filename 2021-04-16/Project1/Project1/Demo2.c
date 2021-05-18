#include<stdio.h>
#include <stdlib.h>
int Add(int x,int y){

	return x + y;
}

void main2(){
	//数组
	int arr[4] = { 1,2,3,4 };
	int arr1[4] = {  2, 3, 4 ,5};
	int arr2[4] = {  3, 4,5,6 };
	//指针数组
	int* parr[3] = {arr,arr1,arr2};
	//数组指针
	int(*pparr)[4] = &arr;
	//如何使用数组指针：
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			//其中，*(parr+i) 等价于 parr[i]
			//		*(*(parr + i) + j) 等价于 parr[i][j]
			printf("%d ", *(*(parr+i) + j));

		}
		printf("\n");
	}
	//指向数组指针数组：
	int(*ppparr[2])[4] = {pparr};
	
	//函数指针：
	int(*p)(int, int ) = Add;
	//函数指针数组
	int(*pf[4])(int, int) = {Add};
	//指向函数指针数组的指针
	int(*(*ppf)[4])(int, int) = p;
	//回调函数：调用方法在调用方法中调用其他已定义的函数，




}