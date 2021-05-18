#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
//
//void printf1(char arr[][5],int x,int y){
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%c ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////数组指针的格式为  基类型 (指针变量名)【指针所指向数组的长度】
//void printf2(char (*arr2)[5],int x,int y){
//	for (int i = 0; i < x; i++){
//		for (int j = 0; j < y; j++){
//			//printf("%c ",*(*(arr2+i) + j));
//			//char (*arr2)[5] = &a[0];
//			// *(arr2) 相当于获取到了a[0][0]中的地址值，
//			// *(*arr2) 相当于获取到了a[0][0]中的值。
//			//printf("%c ",*(*(arr2+i) + j));
//			//printf("%p %c\t", *(arr2 + i), *(*(arr2)) );
//			//等价于
//			//printf("%c ", *(arr2[i] + j));
//			//等价于
//			//printf("%c ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void main(){
//	//数组 a[i] == *(a+i) == *(p+i) ==p[i]
//	char a[3][5] = { { "abce" }, { "bced" }, { "cedf" } };
//	
//	printf2(a, 3, 5);
//}
//

//void main(){
//	//是一个数组，元素有三个，每个元素的类型是整型。
//	int arr[3];
//	//是一个指针数组，该数组可以存放三个指向int类型的指针。
//	int* arr[3];
//	//是一个数组指针，arr指针指向一个长度为3、元素类型为int的数组。
//	int (*arr)[3];
//	//是一个数组指针，arr指针指向了一个长度为3、元素类型为指向整型的指针。
//	int*(*arr)[3];
//	//arr是一个数组，数组内有2个元素，每个元素可以存放一个数组指针，其数组指针指向一个长度为3、元素类型为整型数组。
//	int (*arr[2])[3];
//	//arr是一个数组，数组内有2个元素，每个元素可以存放一个数组指针，其数组指针指向一个长度为3、元素类型为整型指针的数组。
//	int* (*arr[2])[3];
//
//}

////一维数组传参
//void test(int ar[]){}
//// arr[10]中的数字可以省略
//void test(int ar[10]){}
//void test(int* ar){}
//void test1(int* p[10]){}
//void test1(int **p){}

//void main(){
//	int arr[10] = { 0 };
//	test(arr);
//	int* arr[10] = { 0 };
//	test1(arr);
//}

//void test(int* p){}
//void main(){
//		
//	//int a[10] = { 0 };
//	int b = 0;
//	int* a = &b;
//	test(&b);
//	
//}

//void test(int** p){}
//void main(){
//	int a = 1;
//	int* aa = &a;
//	int** aaa = &aa;
//	test(aaa);
//	//aa存放的是引用a的地址。&aa指的是当前变量aa的地址。
//	printf("%p %p",aa,&aa);
//}

//void test2(int** p){}
//
//void main(){
//	
//	void(*p)(int**) = test2;
//	//signal(int,void(*)(int)) 为函数声明部分；
//	//void(*)(int)为函数返回值，
//	void(*signal(int,void(*)(int)))(int);
//	//简约形式：
//	typedef void(*p_fun_t)(int);
//	p_fun_t signal(int, void(*)(int));
//}

//指针数组：
//int a1[3] = { 0 },a2[3] = { 0 },a3[3] = { 0 };
//int* p[3] = {a1,a2,a3};
////数组指针
//int (*p1)[3] = &a1;
//int(*p2[3])[3] = {&a1,&a2,&a3};

int Add(int x,int y){
	return x+y;
}
int Sub(int x, int y){
	return x - y;
}
int Mul(int x, int y){
	return x * y;
}
int Div(int x,int y){
	return x/y;
}
int Menu(){
	printf("**************************\n");
	printf("***请输入您选择的功能：***\n");
	printf("***   1、加     2、减  ***\n");
	printf("***   3、×     4、除  ***\n");
	printf("***       0、退出      ***\n");
	printf("**************************\n");
	int num = 0;
	scanf("%d",&num);
	
	return num;
}

void Calc(int (*p)(int,int)){
	printf("请输入两个操作数：\n");
	int num1 = 0, num2 = 0;
	scanf("%d,%d",&num1,&num2);
	
	printf("%d\n", p(num1, num2));
}

void main1(){

	int(*p[5])(int, int) = { 0,Add, Sub, Mul, Div };
	



	int num = 0;
	do{
		num = Menu();
		switch (num)
		{
		case 1:Calc(Add); break;
		case 2:Calc(Sub); break;
		case 3:Calc(Mul); break;
		case 4:Calc(Div); break;
		case 0: break;
		default:printf("输入有误，请重新输入\n");
		}
		
	} while (num != 0);
	printf("程序结束");
	//定义函数指针数组：
	


}