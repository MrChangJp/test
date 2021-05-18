#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
#include<assert.h>

void memcpys(void* e1,const void* e2,int num){
	assert(e1);
	assert(e2);

	while (num--){

		*((char*)e1 ) = *((char*)e2 );
		++(char*)e1;
		++(char*)e2;

	}
/*
	int i = 0;
	for (i = 0; i < num; i++){
		*((char*)e1+i) = *((char*)e2+i);

	}
*/



}

void memmoves(void* e1, const void* e2, int num){
		
	assert(e1);
	assert(e2);
	char* ee1 = (char*)e1;
	const char* ee2 = (char*)e2;
	int num1 = num;
	if ((ee1 >= (char*)e1)&&(ee2 >= (char*)e2) && (ee1 > ee2)){
		while (num--){
			*(ee1 + num1) = *(ee2 + num1);
			ee1--;
			ee2--;
		}

	}
	else if (ee1 < ee2){
		while (num--){
			*ee1 = *ee2;
			ee1++;
			ee2++;
		}
	}
	else{
		printf("ÎÞÐèÒÆ¶¯");
	}


}


int main(){

	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int count = 0;
	int num = m^n;

	while (num){
		num = num&(num - 1);
		count++;
	}
	printf("%d\n", count);

	/*char arr[100] = "aaaaabbb";
	char arrs[10] = "bbb";
	memset(arr, 0, 2);
	puts(arr);
	printf("%s\n",arr);*/
	/*char arr[] = "1123@qq.com";
	char* i = 0;
	for (i = strtok(arr, "@."); i != NULL; i = strtok(NULL, "@.")){
		printf("%s\n",i);
	}
	char s[] = "asdasdadadsads";
	char* a = _strupr(s);
	printf("s:%s\n",s);
	printf("a:%s\n", _strlwr(a));*/

	return 0;
}