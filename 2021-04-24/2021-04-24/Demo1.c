#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
#include<string.h>
//����һ���ַ����������������
void test1(char* str,int size){
	assert(str);
	/*
	����һ��
	int i = 0;
	for (i = 0; i <= (size/2-1); i++){

		char temp = *(str+i);
		*(str + i) = *(str + size-1-i);
		*(str + size  -i-1) = temp;

	}

	printf("%s",str);*/

	//��������
	char* start = str;
	char* end = start + strlen(str)-1;
	while (start < end){
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
		 

	}
	printf("%s", str);

}

//��ǩ����ĺ� a + aa + aaa + aaaa + aaaaa
void test2(){

	int num = 0;
	int times = 0;
	scanf("%d %d", &num,&times);
	int i = 0;
	int sum = 0;
	int temp = 0;
	for (i = 1; i <= times; i++){
		temp = temp * 10 + 2;
		sum += temp ;

	}
	printf("%d",sum );
}
//��0-100000ˮ�ɻ���
void test3(){

	//ˮ�ɻ��������ֵ�ÿλ��n�η�֮�ͣ�����ԭ���֣�����n��������ɵĸ���


	int i = 0;
	for (i = 0; i <= 100000; i++){

		int len = 1;
		int temp = i;
		while (temp /= 10){
			len++;
		}
		 temp = i;
		int sum = 0;
		while (temp){

			sum += pow(temp%10,len);
			temp /= 10;

		}

		if (i == sum){
			printf("%d ",i);
		}




	}



	/*int j = 0;
	for (j = 0; j <= 100000; j++){

	

		int nums = 1;
		int temp = j;
	
		while (temp/=10){
			nums++;
		}
		int i = 0;
		int sum = 0;
		temp = j;
		while (temp ){
			
			sum += pow(temp % 10,nums);
			temp = temp / 10;
		}

		if (sum == j){
			printf("%d ", sum);
		}


	}*/



}

//���δ�ӡ
void test4(){
	int start = 14/2;
	int line = 0;
	scanf("%d",&line);
		
	//�ϰ벿��
	int i = 0;
	for (i = 1; i <= line; i++){
		int j = 0;
		//��ӡ�ո�
		for (j = 0; j <= (line -1 - i); j++){
			printf(" ");
		}
		//��ӡ����
		int s = 0;
		for (s = 0; s < 2 * i - 1; s++){
			printf("*");
		}
		printf("\n");
	
	}

	//�°벿��

	for (i = line-1; i >= 1; i--){
		int s = 0;
		for (s = 0; s < line - i;s++){
			printf(" ");
		}
		int j = 0;
		for (j = 0; j < 2 * i - 1; j++){
			printf("*");
		}
		printf("\n");
	}



	//for (i = 1; i < 14; i++){
	//	int j = 0;
	//	int s = 0;
	//	if (i <= 7){
	//		for (j = 0; j < start - i; j++){
	//			printf(" ");
	//		}

	//		for (s = 1; s <= (2 * i - 1); s++){
	//			printf("*");
	//		}
	//		if (i == 7){
	//			max = (2 * i - 1);
	//		}
	//	}
	//	else{
	//		for (j = 0; j < start -( 14 -i); j++){
	//			printf(" ");
	//		}

	//		for (s = (max -=2) ; s > 0 ; s--){
	//			printf("*");
	//		}
	//	}




	//	printf("\n");


		//}


}

//һƿ��ˮһԪ��������ƿ�ӿ��Ի�һƿ��ˮ����20Ԫ�����Եõ�����ƿ��ˮ��
void test5(){

	int money = 0;
	scanf("%d", &money);
	int total = 0;
	int nul = 0;
	//���������ˮ�Ŀ�ƿ��
	total = money;
	nul = money;

	while (nul >= 2){
		total += nul / 2;
		nul = nul / 2 + nul % 2;
	}

	
	printf("%d\n", total);
	


}
//�������е�����ȫ���ŵ�ż��ǰ�棻
void test6(){

	int arr1[] = {1,2,3,4,5,6,7,8,9,10};

	int arr[] = { 1, 11, 3, 13, 5, 15, 7, 17, 9, 11 };
	 int sz = sizeof(arr) / sizeof(arr[0]);

	 int * start = arr;
	 int* end = arr + (sz - 1); 

	 while (end > start){

		 while (*start % 2){
			 
			 start++;
			 if (end <= start)break;
		 }
		 while (!(*end % 2) ){
			 
			 end--;
			 if (end <= start)break;
		 }
		 if (end > start){
			 int temp = *start;
			 *start = *end;
			 *end = temp;
		 }
		 
	 }
	 int i = 0;
	 for (i = 0; i < sz; i++){
		 printf("%d ", arr[i]);

	 }

		/* if (*start % 2 && *end %2 ){
			 int temp = *start;
			 *start = *end;
			 *end = *start;
		 }
		 else
		 if (*start % 2 && *end % 2){
			 int temp = *start;
			 *start = *end;
			 *end = *start;
		 }
		 else
		 if (*start % 2 && *end % 2){
			 int temp = *start;
			 *start = *end;
			 *end = *start;
		 }
		 start++;
		 end--;*/
	 



	/*int ji[20] = { 0 };
	int jiNum = 0;
	int ou[20] = { 0 };
	int ouNum = 0;
	int i = 0;
	for (i = 0; i < sz; i++){
		int num = arr[i];
		
		if (arr[i] % 2 == 0){
			ou[ouNum] = arr[i];
			ouNum++;
		}
		else{
			ji[jiNum] = arr[i];
			jiNum++;
		}

	}

	strcpy(ji,ou);
	
	for (i = 0; i < sz; i++){
		printf("%d ", ji[i]);

	}

	*/
}

//��ӡ�������
void test7(){

	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++){

		for (j = 0; j < 10; j++){
			if (j == 0 ||i==j ){
				arr[i][j] = 1;
			}
			if (i>=2 && j >=1){

				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];


			}
		}


	}

	for (i = 0; i < 10; i++){

		for (j = 0; j <= i; j++){
			
				printf("%d ", arr[i][j]);
			
		}
		printf("\n");

	}



}

void o_move(char* str, char* end){

	
	while (end > str){
		char tmp = *str;
		*str = *end;
		*end = tmp;
		str++;
		end--;
	}

}

//������ת��
//��һ�����ȷ�תָ����Ԫ�أ�Ȼ��תʣ�µ�Ԫ�أ���������巭ת
void move(char* str, int m){
	int len = strlen(str);
	//���ָ��Ԫ�ط�ת
	o_move(str, str + m - 1);
	//�ұ�ָ��Ԫ�ط�ת
	o_move(str + m, str + len - 1);
	//ȫ��ָ����ת
	o_move(str, str + len - 1);

}

//ʵ��һ����������������ת�ַ������е�K���ַ�
//���磺ABCD����ת�����ַ��õ�CDAB
void test8(){
	char arr[] = "abcdef"; 
	int sz = strlen(arr);
	int m =5;
	move(arr,m);

	printf(arr);

	//int z = 2;
	//int e = 0;
	//int i = 0;
	//for (i = z - 1, e = 0; i >= 0 && e < z;i--,e++){
	//	char tp = arr[i];
	//	arr[i ] = arr[sz-1-e];
	//	arr[sz - 1 - e] = tp;
	//	
	//}
	//	
	//printf(arr);

}

int funcs(char* a1 ,char* a2){

	int len = strlen(a1);
	int i = 0;
	for (i = 0; i < len; i++){
		move(a1,1);
		if (!strcmp(a1, a2)){
			return 0;
		}
	}
	return 1;

}
//�ж�һ���ַ����Ƿ���һ���ַ�����ת�����ġ�
void test9(){

	char arr1[] = "abcdef";
	char arr2[] = "cdefasb";

	int num = funcs(arr1, arr2);
	if (!num){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}

}
//�Ż����ķ���
int niceFunc(char* a1,char* a2){
	assert(a1);
	assert(a2);
	int l1 = strlen(a1);
	int l2 = strlen(a2);
	if (l1 != l2){
		return 1;
	}
	//a1�ĺ�����һ��a1���ٲ���a2�Ƿ���a1���Ӽ����ɡ�
	//strcat(a1,a1); err ���ַ����Ǵ���ģ���Ϊstrcat��ӵ�һ���ַ��������'\0'��
	//��ʼ׷�ӣ���׷�ӵ�'\0'��ʱ����λ���Ѿ�����Ԫ���滻�����������ѭ��
	//strncat(char* a1,const char* a2,size_t size);�÷�����a2ָ���ֽ�׷�ӵ�a1�ĺ���
	strncat(a1,a1,6);
	//strstr(a1,a2);�÷�������a1���Ƿ����a2�ĵ�����Ԫ�ء�
	//�ҵ�֮�󷵻���Ԫ�صĵ�ַ
	char* index =  strstr(a1,a2);
	if (index == NULL){
		return 1;
	}
	return 0;

}

//�ж�һ���ַ����Ƿ���һ���ַ�����ת�����ġ�
//�Ż����ķ���
void test10(){

	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";

	int num = niceFunc(arr1, arr2);
	if (!num){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}

}

int main(){

	/*char arr[] = "abcdef";
	int sz = strlen(arr);
	test1(arr, sz);
	*/
	test10();
	return 0;
}