#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

void test1(){
	//��һ���������ڴ���1�ĸ�����
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
	
	//��һ���������ڴ���1�ĸ�����
	//�Ż�
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
	//��λȡ����
	//���ڴ��е�1011�е�0��Ϊ1
	int a = 11;
	a = a | (1 << 2);
	printf("%d",a);
	//��a��Ϊԭ����1011
	a = a & ~(1 << 2);
	printf("%d", a);


}

void test4(){
	//������������
	//00000011 -(char����) a 
	char a = 3;
	//01111111
	char b = 127;
	// a + b �Ƚ�a �� bת����int��
	//00000000 00000000 00000000 00000011  -(int����) a
	//00000000 00000000 00000000 01111111  -(int����) b
	//00000000 00000000 00000000 10000010  -(int����) a+b
	
	//10000010 -(char����) c
	char c = a + b;
	//��ʮ���Ƶķ�ʽ����ַ����͵�c����Ҫ����������
	//10000010 ��Ϊ����λΪ1�����԰��շ���λ���
	//11111111 11111111 11111111 10000010  -(int ����) c   --����  
	//11111111 11111111 11111111 10000001  -(int ����) c   --����  ����-1�Ƿ���  ����+1�ǲ���
	//10000000 00000000 00000000 01111110  -(int ����) c   --Դ�� 
	// -126  c
	printf("%d" , c); 


}

void test5(){
	// 10110110  -a
	//11111111 11111111 11111111 10110110 int a  �������������룩
	//10000000 00000000 00000000 01001010  a -32694  ��Դ�룩
	char a = 0xb6;
	//10110110 00000000  -0xb600
	//00000000 00000000 10110110 00000000   int
	//10110110 00000000 -short b
	//11111111 11111111 10110110 00000000 -b �������������룩
	//11111111 11111111 10110101 11111111 -b �������������룩
	//10000000 00000000 01001010 00000000 -b Դ�� 
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
	//���ַ������Ԫ�ظ���
	char* start = str;
	char* end = str;
	while (*end != '\0'){
		end++;
	}
	return end - start;
}

void test8(){
	//ָ������

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
	//����ָ��
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int(*p)[6] = &arr;

}

void test10(){

	//����
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = {  2, 3, 4, 5, 6,7 };
	int arr3[6] = {   3, 4, 5, 6,7,8 };
	int i1 = 1, i2 = 2, i3 = 3;
	int *pi1 = &i1, *pi2 = &i2, *pi3 = &i3;
	//ָ������
	//int *pA[3] = { &i1, &i2, &i3 };
	int *pA[3] = { pi1, pi2, pi3 };
	//����ָ��
	int (*pArr1)[6] = &arr1;
	int (*pArr2)[6] = &arr2;
	int (*pArr3)[6] = &arr3;
	//����ָ�������
	//int(* pArr1[3])[6] = { &arr1 ,&arr2,&arr3};
	
	int (* ppArr1[3])[6] = { pArr1, pArr2, pArr3 };

	int(*(*ppAArr)[3])[6] = &ppArr1;
	/*int* pArr2[6] = &arr2;
	int* pArr3[6] = &arr3;*/

	//ָ������ָ���ָ������
	//int* (*p[3])[6] = { pArr1,pArr2,pArr3};
	printf("%p===%p===%p===%d", pArr1, &pArr1, &arr1,**pArr1);
	//ָ������ָ���ָ�������ָ��
//	int*(*ps)[3] = &p;

	//printf("%d",*(*(p+1)+1));

}

void test11(){
	//sizeof�Ľ���͸����Ƚ�
	//10000000 00000000 00000000 00000001  -1Դ��
	//11111111 11111111 11111111 11111110  -1����
	//11111111 11111111 11111111 11111111  -1����
	//11111111 11111111 11111111 11111111  (��������)-1
	//-1ת��Ϊ�޷������ͣ����λ��1�����Ƿ���λ,��������λ

	int a = -1;

	if (a > sizeof(a)){
		printf(">");
	}
	if (a < sizeof(a)){
		printf("<");
	}

}

void test12(){
	//���������ڴ���1�ĸ���
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
	//���������ڴ���1�ĸ�����

	int input = 0;
	int count = 0;
	scanf("%d",&input);
//18
//10010 n
//10001 n-1
//10000  n=n&(n-1)
//01111 n-1
//00000  n=n&(n-1)
	//ÿ��n&(n-1)���Ὣ���ұߵ�һ��1ĥ����
	while (input){
		input = input & (input - 1);
			count++;
	}
	printf("%d",count);



}

void test14(){
	//�������ڴ�����������֮���ж���λ��ͬ
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
	//��һ�����Ƿ�������
	int input = 0;
	scanf("%d",&input);
	if (input == 1 || input < 1){
		printf("��������");
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
		printf("��������");
		return;
	}
	printf("������");



}

void test16(){
	//��һ��������ӡ�˷��ھ�
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

	//ʹ�õݹ齻���������βԪ��
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

	//���õݹ���һ������ֺ��ÿ����֮�͡�
	if (num < 9){
		return num;
	}
	
	return num % 10 + test18(num / 10);


}

double test19(int n,int k ){
	//�ݹ���n��k�η�

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