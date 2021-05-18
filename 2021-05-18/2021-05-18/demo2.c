//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//
//int intSort(const void* e1, const void* e2){
//	return *((int*)e1) - *((int*)e2);
//
//}
//
//void swp(char* e1,char*e2,int weight){
//	int i = 0;
//	for (i = 0; i < weight; i++){
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//
//
//}
//
//void qsortA(const void* arrs,int num ,int weight ,int (*pfun)(const void* e1,const void* e2)){
//	int i = 0;
//	for (i = 0; i < num;i++){
//		int j = 0;
//		for (j = 0; j < num-1-i;j++){
//
//			if (pfun(((char*)arrs + (j*weight)), ((char*)arrs + ((j+1)*weight))) >0){
//				swp((char*)arrs + (j*weight), (char*)arrs + ((j + 1)*weight),weight);
//			}
//
//
//		}
//	}
//
//
//
//
//}
//
//
//// ÷–¥qsort
//void test1(){
//
//	int arr[] = {12,3,1,37,151,34,54,37,6,55,42,32,19,3,41,26,33,52};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsortA(arr, sz, sizeof(arr[0]), intSort);
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d\n",arr[i]);
//	}
//
//	
//
//}
//
//
//
//int main(){
//	test1();
//	return 0;
//}