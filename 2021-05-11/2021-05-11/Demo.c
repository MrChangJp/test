#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>
#include<stdlib.h>


//柔性数组  ： 在结构体的最后一个成员为数组时，该数组为柔性数组（长度可变数组）
struct s{
	int a;
	//如果int arr[];编译不过，则可以使用int arr[0];
	int arr[0];

};
void test1(){
	//struct s *ss = NULL;
	//printf("%d\n",sizeof(struct s));
	////开辟4+5*4个内存给ss
	//ss = (struct s *)malloc(sizeof(ss->a)+5*sizeof(int));

	struct s * ss = (struct s*)malloc(sizeof(struct s) + 5*sizeof(int));

	ss->a = 10;
	int i = 0;
	for (i = 0; i < 5; i++){
		ss->arr[i] = i;
	}

	for (i = 0; i < 5; i++){
		printf("%d\n" ,ss->arr[i]);
	}

	free(ss);
}

////int main(){
//	test1();
//
//	return 0;
//}