//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//struct persion{
//	char name[10];
//	int age;
//};
////ð������
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
////����
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
////����ð������
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
//	//��������
//	return   (int)e2 - (int)e1;
//}
//
//int floatSort(const void* e1, const void* e2){
//	//��������
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
////int��������
//void test1(){
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, arrSize, sizeof(arr[0]), intSort);
//	for (int i = 0; i < arrSize; i++){
//		printf("%d ", arr[i]);
//	}
//}
////float��������
//void test2(){
//	float arr[10] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0.0 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, arrSize, sizeof(arr[0]), floatSort);
//	for (int i = 0; i < arrSize; i++){
//		printf("%f ", arr[i]);
//	}
//}
////�ṹ��������������
//void test3(){
//	struct persion perpor[3] = { { "zhangsan", 20 }, { "wangwu", 30 }, { "lisi", 10 } };
//	int arrSize = sizeof(perpor) / sizeof(perpor[0]);
//	qsort(perpor, arrSize, sizeof(perpor[0]), persionAgeSort);
//	for (int i = 0; i < arrSize; i++){
//		printf("%s:%d ", (perpor + i)->name, (perpor + i)->age);
//	}
//}
////�ṹ����������
//void test4(){
//	struct persion perpor[3] = { { "zhangsan", 20 }, { "wangwu", 30 }, { "lisi", 10 } };
//	int arrSize = sizeof(perpor) / sizeof(perpor[0]);
//	qsort(perpor, arrSize, sizeof(perpor[0]), persionNameSort);
//	for (int i = 0; i < arrSize; i++){
//		printf("%s:%d ", (perpor + i)->name, (perpor + i)->age);
//	}
//}
////ʹ������ð������
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
//		��������ð���ܽ᣺
//		1������ð�ݷ���qsortð�ݣ���Ҫ������void*���͵�����Դ�����飩������Ԫ�ظ�����Ԫ�ش�С���ȽϷ���ָ��
//		2��ʹ��˫��forѭ������������Ƚ�
//		3���Ƚ�ʱͨ�������������飬�������׵�ַǿתΪ��char*)ָ�����ͣ�Ȼ�����Ԫ�ش�С�������ڲ�ѭ����������
//			��һ��Ԫ�غ͵ڶ���Ԫ�ش��ݸ��Ƚ�ָ�롣���Ƚ�ָ���ɳ���Ա��д��
//		4������Ҫ����ֵ��Ԫ�ؽ�������char*ָ�������Ԫ�ش�С���ݸ�����������������������weight��Сȷ������������
//			�������ɡ�
//		*/
//}