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
////����ָ��ĸ�ʽΪ  ������ (ָ�������)��ָ����ָ������ĳ��ȡ�
//void printf2(char (*arr2)[5],int x,int y){
//	for (int i = 0; i < x; i++){
//		for (int j = 0; j < y; j++){
//			//printf("%c ",*(*(arr2+i) + j));
//			//char (*arr2)[5] = &a[0];
//			// *(arr2) �൱�ڻ�ȡ����a[0][0]�еĵ�ֵַ��
//			// *(*arr2) �൱�ڻ�ȡ����a[0][0]�е�ֵ��
//			//printf("%c ",*(*(arr2+i) + j));
//			//printf("%p %c\t", *(arr2 + i), *(*(arr2)) );
//			//�ȼ���
//			//printf("%c ", *(arr2[i] + j));
//			//�ȼ���
//			//printf("%c ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void main(){
//	//���� a[i] == *(a+i) == *(p+i) ==p[i]
//	char a[3][5] = { { "abce" }, { "bced" }, { "cedf" } };
//	
//	printf2(a, 3, 5);
//}
//

//void main(){
//	//��һ�����飬Ԫ����������ÿ��Ԫ�ص����������͡�
//	int arr[3];
//	//��һ��ָ�����飬��������Դ������ָ��int���͵�ָ�롣
//	int* arr[3];
//	//��һ������ָ�룬arrָ��ָ��һ������Ϊ3��Ԫ������Ϊint�����顣
//	int (*arr)[3];
//	//��һ������ָ�룬arrָ��ָ����һ������Ϊ3��Ԫ������Ϊָ�����͵�ָ�롣
//	int*(*arr)[3];
//	//arr��һ�����飬��������2��Ԫ�أ�ÿ��Ԫ�ؿ��Դ��һ������ָ�룬������ָ��ָ��һ������Ϊ3��Ԫ������Ϊ�������顣
//	int (*arr[2])[3];
//	//arr��һ�����飬��������2��Ԫ�أ�ÿ��Ԫ�ؿ��Դ��һ������ָ�룬������ָ��ָ��һ������Ϊ3��Ԫ������Ϊ����ָ������顣
//	int* (*arr[2])[3];
//
//}

////һά���鴫��
//void test(int ar[]){}
//// arr[10]�е����ֿ���ʡ��
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
//	//aa��ŵ�������a�ĵ�ַ��&aaָ���ǵ�ǰ����aa�ĵ�ַ��
//	printf("%p %p",aa,&aa);
//}

//void test2(int** p){}
//
//void main(){
//	
//	void(*p)(int**) = test2;
//	//signal(int,void(*)(int)) Ϊ�����������֣�
//	//void(*)(int)Ϊ��������ֵ��
//	void(*signal(int,void(*)(int)))(int);
//	//��Լ��ʽ��
//	typedef void(*p_fun_t)(int);
//	p_fun_t signal(int, void(*)(int));
//}

//ָ�����飺
//int a1[3] = { 0 },a2[3] = { 0 },a3[3] = { 0 };
//int* p[3] = {a1,a2,a3};
////����ָ��
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
	printf("***��������ѡ��Ĺ��ܣ�***\n");
	printf("***   1����     2����  ***\n");
	printf("***   3����     4����  ***\n");
	printf("***       0���˳�      ***\n");
	printf("**************************\n");
	int num = 0;
	scanf("%d",&num);
	
	return num;
}

void Calc(int (*p)(int,int)){
	printf("������������������\n");
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
		default:printf("������������������\n");
		}
		
	} while (num != 0);
	printf("�������");
	//���庯��ָ�����飺
	


}