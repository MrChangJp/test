#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

//�Կ�ָ����н�����
void test1(){
	
	int* p = (int*)malloc(40);

	//������÷��Ǵ����
	//��Ϊmalloc���ܶ�̬�ڴ濪��ʧ�ܣ�����NULL
	*p = 10;//err
	int i = 0;
	for (i = 0; i < 10; i++){
		*(p + i) = i;//err
	}

	free(p);
	p = NULL;


}

//�Զ�̬�����ڴ��Խ�����
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