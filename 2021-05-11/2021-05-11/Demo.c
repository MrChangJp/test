#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>
#include<stdlib.h>


//��������  �� �ڽṹ������һ����ԱΪ����ʱ��������Ϊ�������飨���ȿɱ����飩
struct s{
	int a;
	//���int arr[];���벻���������ʹ��int arr[0];
	int arr[0];

};
void test1(){
	//struct s *ss = NULL;
	//printf("%d\n",sizeof(struct s));
	////����4+5*4���ڴ��ss
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