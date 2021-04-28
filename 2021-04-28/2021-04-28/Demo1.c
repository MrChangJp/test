#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

//对空指针进行解引用
void test1(){
	
	int* p = (int*)malloc(40);

	//下面的用法是错误的
	//因为malloc可能动态内存开辟失败，返回NULL
	*p = 10;//err
	int i = 0;
	for (i = 0; i < 10; i++){
		*(p + i) = i;//err
	}

	free(p);
	p = NULL;


}

//对动态开辟内存的越界访问
void test2(){

	int* p = (int*)malloc(5 * sizeof(int));

	int i = 0;
	for (; i < 10; i++){
		*(p + i) = i;
	}
	free(p);

}


int main(){


	return 0;
}