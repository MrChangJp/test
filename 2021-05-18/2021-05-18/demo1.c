//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//
//int main(){
//
//	//Ö¸ÕëÊý×é£º
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 100;
//	int* s = &d;
//	printf("%d\n",*s);
//
//	int* p[3] = {s,&b,&c};
//	int i = 0;
//	for (i = 0; i < 3;i++){
//		printf("%d\n",(*(p+i)));
//	}
//
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[3] = { 2, 3,4 };
//	int arr3[3] = { 3, 4, 5 };
//
//	int(*p1)[3] = &arr1;
//
//	printf("%d\n", *(*p1));
//
//	int* erarr1[3] = {arr1,arr2,arr3};
//
//	for (int i = 0; i < 3;i++){
//		for (int j = 0; j < 3; j++){
//			printf("%d ", *(*(erarr1 + i) + j));
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}