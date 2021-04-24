#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>

//例题1
void test1(){
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	//将a的地址转化为int型，然后+1，再转换为整型指针
	//相当于指针向后移动一个字节。配图“int指针的移动”；
	int *ptr2 = (int*)((int)a + 1);
	printf("%x,%x",ptr1[-1],*ptr2);
}

//例题2
void test2(){
	//解析见配图：“int指针的移动”
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
}

int main(){

	test1();

	return 0;
}