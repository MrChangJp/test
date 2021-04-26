#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

//求一共能喝多少瓶汽水，一共20元，一元一瓶，两瓶空瓶换一瓶汽水。
void test1(){
	int money = 20;
	int empty = money;
	int total = money;

	while (empty >= 2){
		total += empty / 2;
		empty = empty / 2 + empty % 2;

	}
	printf("%d", total);
	//return 0;
}

//交换奇偶数的位置。
void test2(){

	int arr[10] = { 1, 6,3,9,5,2, 7,10, 9, 4};
	int sz = sizeof(arr) / sizeof(sizeof(arr[0]));
	int* start = arr;
	int* end = arr + sz-1;

	while (start < end){

		while (*start % 2 != 0 && start <end){
			/*if (  || start >end){
				break;
			}*/
			start++;
		}

		while (*end % 2 == 0 && start <end){
			/*if ( || start >end){
				break;
			}*/
			end--;
		}
		if (start < end){
			int tmp = *start;
			*start = *end;
			*end = tmp;
		}

	}
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}


}


//杨辉三角
void test3(){
	int arr[20][20] = { 0 };
	int i = 0;
	for (i = 0; i < 20; i++){
		int j = 0;
		for (j = 0; j < 20; j++){

			if (j == 0 || i == j){
				arr[i][j] = 1;

			}
			if (i>=2 && (j != 0 || i != j)){
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1] ;
			}



		}
	}
	for (i = 0; i < 20; i++){
		int j = 0;
		int s = 0;
		for (s = 20-i; s>0; s--)
			printf("  ");
		for (j = 0; j < 20; j++){
			
			

			if (arr[i][j] != 0)
				printf("%d ", arr[i][j]);

			



		}
		printf("\n");
	}




}

void test4(){

	char killer = 0;

	for (killer = 'a'; killer <= 'd';killer++){
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') +( killer != 'd') == 3){
			printf("%c\n", killer);
		}
	}

}

void test5(){

	int a = 0, b = 0, c = 0, d = 0, e = 0;
	
	for (a = 1; a <= 5; a++){
		for (b = 1; b <= 5; b++){
			for (c = 1; c <= 5; c++){
				for (d = 1; d <= 5; d++){
					for (e = 1; e <= 5; e++){

						if (((b == 2) + (a == 3) == 1) && 
							((b == 2) + (e == 4) == 1) && 
							((c == 1) + (d == 2) == 1) && 
							((c == 5) + (d == 3) == 1) && 
							((e==4) + (a==1) == 1)){
							if (a*b*c*d*e == 120)
							printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
						}

					}
				}
			}
		}
	}

}

//求一个数组中是否有指定的数字，要求时间复杂度小于O（N）（小于遍历一遍的次数）
int test6(int arr[][3],int k,int* x,int* y){

	int sx = 0;
	int sy = *y - 1;

	while (sx<=*x-1&&sy>=0){

		if (arr[sx][sy] < k){
			sx++;
		}
		else if (arr[sx][sy] > k){
			sy--;
		}
		else{
			*x = sx+1;
			*y = sy+1;
			return 1;
		}


	}

	*x = -1;
	*y = -1;
	return 0;


}

//递归检查字符串的长度
int test7(char* arr){

	if (!*arr){
		return 0;
	}
	return test7(arr+1) + 1;

}

//将原数组copy到目标数组中
char* test8(char* dest, char* src){

	assert(dest);
	assert(src);

	char* p = dest;

	while (*dest++ = *src++){
		;
	}

	return p;

}

//模仿strcat
char* test9(char* dest,const char* src){

	assert(dest);
	assert(src);

	int index = 0;
	char*p = dest;

	while (*p != '\0'){
		p++;
	}

	while (*p++ = *src++);
	
	return dest;
	
}

//模仿strcmp
int test10(char* str1,char* str2){

	while (*str1 == *str2){

		if (*str1 == '\0'){
			return 0;
		}

		str2++;
		str1++;
	}

	if (*str1 > *str2){
		return 1;
	}
	else{
		return - 1;
	}

}

//模仿strstr
char* test11(const char* dest,const char* src){

	if (!*src){
		return (char*)dest;
	}

	const char* cpd = dest;
	const char* ps = src;
	const char* cps = src;
	char* cur = (char*)dest;


	while (*cur){
		cpd = cur;
		cps = src;
		while ((*cpd) && (*cps)&&(*cpd == *cps)){

			cpd++;
			cps++;

		}

		if (!*cps){
			return cur;
		}

		
		cur++;
	}

		return NULL;
	



}

//调用
void test12(){

}

//strerror的使用
void test13(){
	//0		No error
	//1     Operation not permitted
	//2     No such file or directory
	//3     No such process
	//4     Interrupted function call
	//errno  全局错误码变量，
	//当C语言库函数执行过程中，发生了错误，就会把对应的错误码放到errno中
	errno = 9;
	char* err = strerror(errno);
	printf("%s\n",err);

}
//自定义memcpy函数
char* test14(void* dest,void* src,int size){

	assert(dest);
	assert(src);

	while (size--){
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++*(char*)src;
	}


}

//memmove自定义
char* tset15(void* dest, void* src, int size){

	assert(dest);
	assert(src);

	char* pm = dest;

	while (size--){

		if (dest<src || dest>(char*)src + size){

			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
	
		}
		else{
			//"abcdef";
			//   abcd
			*((char*)dest+size) = *((char*)src+size);
			(char*)dest + size;
			(char*)src + size;
			
		}

	}


	return pm;

}

int main(){
	char arr1[] = "abcdef";
	char arr2[20] = {0};
	//tset15(arr1, arr1 + 2, 4);
	tset15(arr1+2, arr1, 4);
	printf(arr1);
	
	//char arr[] = "www.baidu.com@qq.com";
	//char* str = "@.";
	//char* i = NULL;
	//for (i = strtok(arr, str); i != NULL; i = strtok(NULL, str)){
	//	
	//	printf("%s\n",i);

	//}




	//char p[20] = "abcdef";
	//char ps[] = "cd";

	//printf("%p", strstr(p, ps));
	////printf("%d", test11(p, ps)-p+1);

	////char p[20] = "abcdef";
	////char ps[] = "xx";

	////printf("%s", strncpy(p,ps,5));
	//int num = 6.7;

	/*
		char* p = "abcdef";
		char* ps = "bit";
		此时指针p和ps指向的是常量字符串，常量字符串不可改变
	*/
	/*char p[] = "abcdef";
	char ps[] = "bit";

	printf("%s", test8(p, ps));*/

	/*char* p = "abcdef";
	printf("%d",test7(p));*/

	//int arr[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	//int x = 3;
	//int y = 3;
	//int num = test6(arr, 7, &x, &y);
	//if (num == 1){
	//	printf("找到了!\n坐标是：(%d,%d）",x,y);
	//}
	//else{
	//	printf("没到了\n");
	//}
	//test5();
}





