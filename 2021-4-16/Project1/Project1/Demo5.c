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
//	////������
//	////�Գ���
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
//	//������
//	////�Գ���
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
//	////����1/1-1/2+1/3-1/4+...+1//99-1/100��ֵ����ӡ�����
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
////	//���Ǹ����е����ֵ 
////	//����˲��ܱȽϸ��������⡣
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
//	////�˷��ھ���
//
//	//for (int i = 1; i <= 9; i++){
//	//	for (int j = 1; j <= i; j++){
//	//		printf("%d X %d = %d\t",j,i,j*i);
//	//	}
//	//	printf("\n");
//	//}
//
//	//��������Ϸ
//
//
////	return 0;
////}
//
////void nemu(){
////	printf("###############################\n");
////	printf("##1����ʼ��������Ϸ   0���˳�##\n");
////	printf("###############################\n");
////
////}
////void play(){
////	int ran = rand() % 100 + 1;
////	while (1){
////		printf("���������µ����֣�");
////		int num = 0;
////		scanf("%d", &num);
////		if (num > ran){
////			printf("�´���\n");
////		}
////		else if(num < ran){
////			printf("��С��\n");
////		}
////		else{
////			printf("��ϲ�����¶���\n");
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
////		case 1:printf("��Ϸ��ʼ\n"); play(); break;
////		case 0:printf("��Ϸ��������ӭ������\n"); break;
////		default:printf("�����������������룡\n"); break;
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
//	//�ݹ�׳�
//	//int n = -3,  ret = 0;
//	//ret = Fnc1(n);
//	////���10��쳲��ɽ���  1 1 2 3 5 8 13
//	//int fib = 40;
//	//int ret = Fib2(6);
//	//printf("%d", ret);
//	//��ŵ�����ƶ�
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
//�Ż����ð������
void SortFun1(int arr[], int size){


	for (int i = 0; i < size - 1; i++){
		//�����Ƿ������ʾ
		int flag = 1;
		for (int j = 0; j < size - i - 1; j++){
			if (arr[j]>arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				//���轻�����Ϊ��������
			}
		}
		//�ж�flag��ֵ�Ƿ�Ϊ1����Ϊ1��Ϊ������Ϊ��������������
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