#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>

//����1
void test1(){
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	//��a�ĵ�ַת��Ϊint�ͣ�Ȼ��+1����ת��Ϊ����ָ��
	//�൱��ָ������ƶ�һ���ֽڡ���ͼ��intָ����ƶ�����
	int *ptr2 = (int*)((int)a + 1);
	printf("%x,%x",ptr1[-1],*ptr2);
}

//����2
void test2(){
	//��������ͼ����intָ����ƶ���
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
}

int main(){

	test1();

	return 0;
}