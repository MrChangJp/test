#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

void test1(){
	//求一个整数在内存中1的个数。
	int num = 0;
	scanf("%d", &num);

	int count = 0;
	while (num){
		if (num % 2 == 1){
			count++;
		}
		num /= 2;
	}
	printf("%d", count);
}

void test2(){
	
	//求一个整数在内存中1的个数。
	//优化
	int num = 0;
	scanf("%d", &num);

	int count = 0;
	for (int i = 0; i < 32; i++){
		if (1 == ((num >> i) & 1)){
			count++;
		}
	}

	printf("%d", count);
}

void test3(){
	//按位取反；
	//将内存中的1011中的0变为1
	int a = 11;
	a = a | (1 << 2);
	printf("%d",a);
	//将a变为原来的1011
	a = a & ~(1 << 2);
	printf("%d", a);


}

void test4(){
	//整型提升例题
	//00000011 -(char类型) a 
	char a = 3;
	//01111111
	char b = 127;
	// a + b 先将a 和 b转换成int型
	//00000000 00000000 00000000 00000011  -(int类型) a
	//00000000 00000000 00000000 01111111  -(int类型) b
	//00000000 00000000 00000000 10000010  -(int类型) a+b
	
	//10000010 -(char类型) c
	char c = a + b;
	//以十进制的方式输出字符类型的c。需要整型提升。
	//10000010 因为符号位为1，所以按照符号位填充
	//11111111 11111111 11111111 10000010  -(int 类型) c   --补码  
	//11111111 11111111 11111111 10000001  -(int 类型) c   --反码  补码-1是反码  反码+1是补码
	//10000000 00000000 00000000 01111110  -(int 类型) c   --源码 
	// -126  c
	printf("%d" , c); 


}

void test5(){
	// 10110110  -a
	//11111111 11111111 11111111 10110110 int a  整形提升（补码）
	//10000000 00000000 00000000 01001010  a -32694  （源码）
	char a = 0xb6;
	//10110110 00000000  -0xb600
	//00000000 00000000 10110110 00000000   int
	//10110110 00000000 -short b
	//11111111 11111111 10110110 00000000 -b 整形提升（补码）
	//11111111 11111111 10110101 11111111 -b 整形提升（反码）
	//10000000 00000000 01001010 00000000 -b 源码 
	short b = 0xb600;
	//
	//10110110 00000000 00000000 00000000  -0xb6000000

	int c = 0xb6000000;
	
	//
	if (a == 0xb6){
		printf("c");
	}
	if (b == 0xb600){
		printf("b");
	}
	if (c == 0xb6000000){
		printf("c");
	}
}

int fun(){
	static int num = 1;
	return ++num;
}

int* test6(){
	int a = 0;
	return &a;
}

int test7(char * str){
	//求字符数组的元素个数
	char* start = str;
	char* end = str;
	while (*end != '\0'){
		end++;
	}
	return end - start;
}

void test8(){
	//指针数组

	int  a = 10;
	int b = 20;
	int c = 30;
	int *ps = &a;
	int* p2 = &b;
	int * p3 = &c;
	//int* p[] = { &a, &b, &c };
	int* p[] = { ps, p2, p3 };
	for (int i = 0; i < 3; i++){
		printf("%d ", *(p[i]));
	}
}

void test9(){
	//数组指针
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int(*p)[6] = &arr;

}

void test10(){

	//数组
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = {  2, 3, 4, 5, 6,7 };
	int arr3[6] = {   3, 4, 5, 6,7,8 };
	int i1 = 1, i2 = 2, i3 = 3;
	int *pi1 = &i1, *pi2 = &i2, *pi3 = &i3;
	//指针数组
	//int *pA[3] = { &i1, &i2, &i3 };
	int *pA[3] = { pi1, pi2, pi3 };
	//数组指针
	int (*pArr1)[6] = &arr1;
	int (*pArr2)[6] = &arr2;
	int (*pArr3)[6] = &arr3;
	//数组指针的数组
	//int(* pArr1[3])[6] = { &arr1 ,&arr2,&arr3};
	
	int (* ppArr1[3])[6] = { pArr1, pArr2, pArr3 };

	int(*(*ppAArr)[3])[6] = &ppArr1;
	/*int* pArr2[6] = &arr2;
	int* pArr3[6] = &arr3;*/

	//指向数组指针的指针数组
	//int* (*p[3])[6] = { pArr1,pArr2,pArr3};
	printf("%p===%p===%p===%d", pArr1, &pArr1, &arr1,**pArr1);
	//指向数组指针的指针数组的指针
//	int*(*ps)[3] = &p;

	//printf("%d",*(*(p+1)+1));

}

void test11(){
	//sizeof的结果和负数比较
	//10000000 00000000 00000000 00000001  -1源码
	//11111111 11111111 11111111 11111110  -1补码
	//11111111 11111111 11111111 11111111  -1补码
	//11111111 11111111 11111111 11111111  (符号整型)-1
	//-1转换为无符号整型，最高位的1不再是符号位,而是数据位

	int a = -1;

	if (a > sizeof(a)){
		printf(">");
	}
	if (a < sizeof(a)){
		printf("<");
	}

}

void test12(){
	//求整数在内存中1的个数
	int a = 53;
	int count = 0;
	for (int i = 0; i < 32; i < i++){
		if (1 == ((a >> i) & 1)){
			count++;
		}
	}
	printf("%d", count);


}

void test13(){
	//求数字在内存中1的个数。

	int input = 0;
	int count = 0;
	scanf("%d",&input);
//18
//10010 n
//10001 n-1
//10000  n=n&(n-1)
//01111 n-1
//00000  n=n&(n-1)
	//每次n&(n-1)都会将最右边的一个1磨掉。
	while (input){
		input = input & (input - 1);
			count++;
	}
	printf("%d",count);



}

void test14(){
	//整数在内存中求两个数之间有多少位不同
	int m = 0;
	int n = 0;
	scanf("%d %d",&m,&n);
	int count = 0;
	int num = m^n;

	while (num){
		num = num&(num - 1);
		count++;
	}

	printf("%d",count);

}

void test15(){
	//求一个数是否是素数
	int input = 0;
	scanf("%d",&input);
	if (input == 1 || input < 1){
		printf("不是素数");
		return;
	}
	int flag = 1;
	int sq = sqrt(input);
	printf("%d", sq);
	for (int i = 2; i <= sqrt(input); i++){

		if (input % i == 0){
			flag = 0;
			break;
		}

	}
	if (flag != 1){
		printf("不是素数");
		return;
	}
	printf("是素数");



}

void test16(){
	//给一个数，打印乘法口诀
	int input = 0;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++){
		for (int j = 1; j <= i; j++){
			printf("%d * %d = %d ",i,j,i*j);
		}
		printf("\n");
	}


}

void test17( char arr[]){

	//使用递归交换数组的首尾元素
	char temp = arr[0];
	int len = strlen(arr) ;
	
	arr[0] = arr[len-1];
	arr[len -1] = '\0';

	if (len-1 >= 2){
		test17(arr+1);
	}


	arr[len - 1] = temp;


}

int test18(int num){

	//利用递归求一个数拆分后的每个数之和。
	if (num < 9){
		return num;
	}
	
	return num % 10 + test18(num / 10);


}

double test19(int n,int k ){
	//递归求n的k次方

	if (n == 0 || n == 1){
		return n;
	}
	
	if (k < 0){
		return 1.0/test19(n,-k);
	}
	else if (k == 0){
		return 1;
	}
	else{

		return n*test19(n,k-1);

	}

	return 0;
}
int main(){
	//test10();
	/*int* c = test6();
	printf("%d",*c);*/
	/*char arr[] = "abcdefg";
	test17(arr);
	printf("%s",arr);
*/

	//int m = test18(1729);
	//printf("%d",m);

	//char arr[] = "qwdcsvz";
	//printf("%d", test7(arr));
	
	printf("%.3lf", test19(0,3));

	//system("pause");
	return 0;
}