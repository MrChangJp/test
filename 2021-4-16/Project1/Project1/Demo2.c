#include<stdio.h>
#include <stdlib.h>
int Add(int x,int y){

	return x + y;
}

void main2(){
	//����
	int arr[4] = { 1,2,3,4 };
	int arr1[4] = {  2, 3, 4 ,5};
	int arr2[4] = {  3, 4,5,6 };
	//ָ������
	int* parr[3] = {arr,arr1,arr2};
	//����ָ��
	int(*pparr)[4] = &arr;
	//���ʹ������ָ�룺
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			//���У�*(parr+i) �ȼ��� parr[i]
			//		*(*(parr + i) + j) �ȼ��� parr[i][j]
			printf("%d ", *(*(parr+i) + j));

		}
		printf("\n");
	}
	//ָ������ָ�����飺
	int(*ppparr[2])[4] = {pparr};
	
	//����ָ�룺
	int(*p)(int, int ) = Add;
	//����ָ������
	int(*pf[4])(int, int) = {Add};
	//ָ����ָ�������ָ��
	int(*(*ppf)[4])(int, int) = p;
	//�ص����������÷����ڵ��÷����е��������Ѷ���ĺ�����




}