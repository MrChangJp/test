//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//struct persion{
//	char name[10];
//	int age;
//};
////冒泡排序
//void fSort(int parr[], int size){
//
//	for (int i = 0; i < size - 1; i++){
//		for (int j = 0; j < size - i - 1; j++){
//			int temp = 0;
//			if (parr[j] > parr[j + 1]){
//				temp = parr[j];
//				parr[j] = parr[j + 1];
//				parr[j + 1] = temp;
//			}
//		}
//
//
//	}
//
//
//}
////降序
//int cmp(const void* e1, const void* e2){
//
//	return (int*)e1 - (int *)e2;
//
//
//}
//
//void swp(char* e1, char* e2, int weight){
//
//	for (int i = 0; i < weight; i++){
//		char temp = (*e1);
//
//		(*e1) = (*e2);
//		(*e2) = temp;
//		e1++;
//		e2++;
//	}
//
//}
//
////万能冒泡排序
//void allSort(void* data,size_t size,size_t weight,int (*cmp)(const void*e1,const void* e2)){
//
//	for (int i = 0; i < size - 1; i++){
//		for (int j = 0; j < size - i - 1; j++){
//			
//			if (cmp(((char*)(data) + j*weight), (((char*)(data) + (j + 1)*weight)))>0){
//				swp(((char*)(data)+j*weight), (((char*)(data)+(j + 1)*weight)), weight);
//			}
//			
//		}
//
//
//	}
//
//
//}
//
//int intSort(const void* e1, const void* e2){
//	//升序排序
//	return   (int)e2 - (int)e1;
//}
//
//int floatSort(const void* e1, const void* e2){
//	//升序排序
//	if (*(float*)e1 == *(float*)e2){
//		return 0;
//	}
//	else if (*(float*)e1 > *(float*)e2){
//		return 1;
//	}
//	else {
//		return -1;
//	}
//
//}
//
//int persionAgeSort(const void* e1, const void* e2){
//
//	return (((struct persion*)e1)->age - ((struct persion*)e2)->age);
//}
//
//int persionNameSort(const void* e1, const void* e2){
//
//	return strcmp(((struct persion*)e1)->name, ((struct persion*)e2)->name);
//}
////int数组排序
//void test1(){
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, arrSize, sizeof(arr[0]), intSort);
//	for (int i = 0; i < arrSize; i++){
//		printf("%d ", arr[i]);
//	}
//}
////float数组排序
//void test2(){
//	float arr[10] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0.0 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, arrSize, sizeof(arr[0]), floatSort);
//	for (int i = 0; i < arrSize; i++){
//		printf("%f ", arr[i]);
//	}
//}
////结构体数组年龄排序
//void test3(){
//	struct persion perpor[3] = { { "zhangsan", 20 }, { "wangwu", 30 }, { "lisi", 10 } };
//	int arrSize = sizeof(perpor) / sizeof(perpor[0]);
//	qsort(perpor, arrSize, sizeof(perpor[0]), persionAgeSort);
//	for (int i = 0; i < arrSize; i++){
//		printf("%s:%d ", (perpor + i)->name, (perpor + i)->age);
//	}
//}
////结构体名字排序
//void test4(){
//	struct persion perpor[3] = { { "zhangsan", 20 }, { "wangwu", 30 }, { "lisi", 10 } };
//	int arrSize = sizeof(perpor) / sizeof(perpor[0]);
//	qsort(perpor, arrSize, sizeof(perpor[0]), persionNameSort);
//	for (int i = 0; i < arrSize; i++){
//		printf("%s:%d ", (perpor + i)->name, (perpor + i)->age);
//	}
//}
////使用万能冒泡排序
//void test5(){
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	allSort(arr, arrSize, sizeof(arr[0]), cmp);
//	for (int i = 0; i < arrSize; i++){
//		printf("%d ", arr[i]);
//	}
//}
//void main1(){
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	test5();
//	/*
//		自制万能冒泡总结：
//		1、万能冒泡仿制qsort冒泡，需要参数：void*类型的数据源（数组）、数组元素个数、元素大小、比较方法指针
//		2、使用双重for循环来逐个两辆比较
//		3、比较时通过传过来的数组，将数组首地址强转为（char*)指针类型，然后加上元素大小个数乘内层循环次数，以
//			第一个元素和第二个元素传递给比较指针。（比较指针由程序员编写）
//		4、将需要交换值的元素交换，将char*指针和数组元素大小传递给交换函数，交换函数根据weight大小确定交换次数。
//			交换即可。
//		*/
//}