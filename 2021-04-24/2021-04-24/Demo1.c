#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
#include<string.h>
//输入一个字符串，倒叙输出来。
void test1(char* str,int size){
	assert(str);
	/*
	方法一：
	int i = 0;
	for (i = 0; i <= (size/2-1); i++){

		char temp = *(str+i);
		*(str + i) = *(str + size-1-i);
		*(str + size  -i-1) = temp;

	}

	printf("%s",str);*/

	//方法二：
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

//求签五项的和 a + aa + aaa + aaaa + aaaaa
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
//求0-100000水仙花数
void test3(){

	//水仙花数：数字的每位的n次方之和，等于原数字，其中n是数字组成的个数


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

//菱形打印
void test4(){
	int start = 14/2;
	int line = 0;
	scanf("%d",&line);
		
	//上半部分
	int i = 0;
	for (i = 1; i <= line; i++){
		int j = 0;
		//打印空格
		for (j = 0; j <= (line -1 - i); j++){
			printf(" ");
		}
		//打印星星
		int s = 0;
		for (s = 0; s < 2 * i - 1; s++){
			printf("*");
		}
		printf("\n");
	
	}

	//下半部分

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

//一瓶汽水一元。两个空瓶子可以换一瓶汽水，给20元，可以得到多少瓶汽水？
void test5(){

	int money = 0;
	scanf("%d", &money);
	int total = 0;
	int nul = 0;
	//喝完买的汽水的空瓶子
	total = money;
	nul = money;

	while (nul >= 2){
		total += nul / 2;
		nul = nul / 2 + nul % 2;
	}

	
	printf("%d\n", total);
	


}
//将数组中的奇数全部放到偶数前面；
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

//打印杨辉三角
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

//三步翻转法
//第一步，先反转指定的元素，然后翻转剩下的元素，最后再整体翻转
void move(char* str, int m){
	int len = strlen(str);
	//左边指定元素翻转
	o_move(str, str + m - 1);
	//右边指定元素翻转
	o_move(str + m, str + len - 1);
	//全部指定翻转
	o_move(str, str + len - 1);

}

//实现一个函数，可以左旋转字符串，中的K个字符
//例如：ABCD左旋转两个字符得到CDAB
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
//判断一个字符串是否是一个字符串旋转得来的。
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
//优化过的方法
int niceFunc(char* a1,char* a2){
	assert(a1);
	assert(a2);
	int l1 = strlen(a1);
	int l2 = strlen(a2);
	if (l1 != l2){
		return 1;
	}
	//a1的后边添加一个a1，再查找a2是否是a1的子集即可。
	//strcat(a1,a1); err 这种方法是错误的，因为strcat会从第一个字符串后面的'\0'处
	//开始追加，当追加到'\0'处时，该位置已经被首元素替换，所以造成死循环
	//strncat(char* a1,const char* a2,size_t size);该方法将a2指定字节追加到a1的后面
	strncat(a1,a1,6);
	//strstr(a1,a2);该方法查找a1中是否包含a2的的所有元素。
	//找到之后返回首元素的地址
	char* index =  strstr(a1,a2);
	if (index == NULL){
		return 1;
	}
	return 0;

}

//判断一个字符串是否是一个字符串旋转得来的。
//优化过的方法
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