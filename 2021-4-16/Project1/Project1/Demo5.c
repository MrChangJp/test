//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//#include<math.h>
//#define Sum( x, y) (x+y)
//
////int main()
////{
//	////求素数
//	////试除法
//	//int nums = 200;
//	//for (int i = 2; i <= 200; i++){
//	//	
//	//	int j = 0;
//	//	for ( j = 2; j <= i; j++){
//	//		if (i%j == 0){
//	//			//j++;
//	//			break;
//	//		}
//	//	}
//	//	if (j  ==i){
//	//		printf("%d ",i);
//	//	}
//
//
//	//}
//
//	//求素数
//	////试除法
//	//int nums = 200;
//	//for (int i = 100; i <= 200; i++){
//
//	//	int j = 0;
//	//	int sq = sqrt(i);
//	//	for (j = 2; j <= sqrt(i); j++){
//	//		if (i%j == 0){
//	//			//j++;
//	//			break;
//	//		}
//	//	}
//	//	if (j > sqrt(i)){
//	//		printf("%d ", i);
//	//	}
//
//
//	//}
//	/*int count = 0;
//	for (int i = 1; i <= 100; i++){
//		
//		
//		int shi = i / 10;
//		int ge = i % 10;
//		if ( ge == 9){
//			count++;
//			
//		}
//		if (shi == 9){
//			count++;
//			
//		}
//
//
//	}
//	printf("%d", count);
//	*/
//
//	////计算1/1-1/2+1/3-1/4+...+1//99-1/100的值，打印结果。
//
//	//float sum = 1;
//	//for (int i = 2; i <= 100; i++){
//	//	if (i % 2 == 0){
//	//		sum -= 1.0 / i;
//	//		continue;
//	//	}
//
//	//	sum += 1.0 / i;
//
//
//	//}
//	//printf("%f",sum);
////	//求是个数中的最大值 
////	//解决了不能比较负数的问题。
//////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
////	int size = sizeof(arr) / sizeof(arr[0]);
////	int max = arr[0];
////
////	for (int i = 1; i < size; i++){
////		if (arr[i] > max){
////			max = arr[i];
////		}
////	}
////
////	printf("%d", max);
//	
//	////乘法口诀表
//
//	//for (int i = 1; i <= 9; i++){
//	//	for (int j = 1; j <= i; j++){
//	//		printf("%d X %d = %d\t",j,i,j*i);
//	//	}
//	//	printf("\n");
//	//}
//
//	//猜数字游戏
//
//
////	return 0;
////}
//
////void nemu(){
////	printf("###############################\n");
////	printf("##1、开始猜数字游戏   0、退出##\n");
////	printf("###############################\n");
////
////}
////void play(){
////	int ran = rand() % 100 + 1;
////	while (1){
////		printf("请输入您猜的数字：");
////		int num = 0;
////		scanf("%d", &num);
////		if (num > ran){
////			printf("猜大了\n");
////		}
////		else if(num < ran){
////			printf("猜小了\n");
////		}
////		else{
////			printf("恭喜您！猜对了\n");
////			break;
////		}
////
////	}
////}
////int main(){
////	srand((size_t)time(NULL));
////	int input = 0;
////	do{
////		nemu();
////		scanf("%d", &input);
////		switch (input){
////		case 1:printf("游戏开始\n"); play(); break;
////		case 0:printf("游戏结束，欢迎再来！\n"); break;
////		default:printf("输入有误，请重新输入！\n"); break;
////		}
////	} while (input);
////
////
////	return 0;
////}
////
//#include<math.h>
//void sushu(int start,int end){
//	for (int i = start; i <= end; i++){
//		
//		if (panduan(i) > sqrt(i)){
//			printf("%d  ", i);
//		}
//	}
//}
//
//int panduan( int elem){
//	int j = 0;
//	for (j = 2; j <= sqrt(elem); j++){
//		if (elem % j == 0){
//			return j;
//		}
//	}
//
//	
//}
//void main(){
//	int start = 100;
//	int end = 200;
//	sushu(start, end);
//
//}
//
//
//
//void f1(int start, int end){
//	f2(10);
//}
//
//int f2(int elem){
//	printf(elem);
//}

#include<stdio.h>

void print(int x){

	if (x > 9){
		print(x/10);
	}
	printf("%d\n", x % 10);
}

int strlens(char* arr){
	
	if (*arr != '\0'){
		return 1 + strlens(++arr);
	}
	else{
		return 0;
	}

}

int Fnc1(int x ){

	if (x <= 1){
		return 1;
	}
	else{
		return x *Fnc1(x - 1);
	}
}

int Fib(int x){

	if (x <= 2){
		return 1;
	}
	else{
		return Fib(x - 1) + Fib(x - 2);
	}

}

int Fib2(int x){

	int a = 1;
	int b = 1;
	int c = 1;
	
	while (x>2){
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	

	return c;

}

void Move(char c1,char c2){
	printf("%c -> %c\n",c1,c2);
}

void Hannot(int n,char a,char b,char c){
	if (n == 1){
		Move(a,c);
	}
	else{
		Hannot(n - 1, a, c, b);
		Move(a,c);
		Hannot(n - 1, b, a, c);
	}
}
//
//int main(){
//
//	//print(1234);
//	//printf("%d",strlens("abcd"));
//	//递归阶乘
//	//int n = -3,  ret = 0;
//	//ret = Fnc1(n);
//	////求第10个斐波纳皆数  1 1 2 3 5 8 13
//	//int fib = 40;
//	//int ret = Fib2(6);
//	//printf("%d", ret);
//	//汉诺塔的移动
//
//
//
//	Hannot(5,'A','B','C');
//
//	return 0;
//}

void SortFun(int arr[],int size){


	for (int i = 0; i < size-1; i++){
		for (int j = 0; j < size - i - 1;j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}
//优化后的冒泡排序
void SortFun1(int arr[], int size){


	for (int i = 0; i < size - 1; i++){
		//设置是否有序表示
		int flag = 1;
		for (int j = 0; j < size - i - 1; j++){
			if (arr[j]>arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				//如需交换则变为数组无序。
			}
		}
		//判断flag的值是否为1，如为1则为数组已为有序，无序再排序。
		if (flag == 1){
			break;
		}
	}

}

void printfs(int arr[], int size){
	
	for (int i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
}
//
//int main(){
//	
//	int arr[] = {1,23,5,7,3,31,5,27,22,34,2};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	SortFun(arr, size);
//	printfs(arr, size);
//
//}