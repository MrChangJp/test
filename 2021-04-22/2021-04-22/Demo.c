#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//结构体的创建
struct Stu{
	char name[20];
	int age;
	char sex[5];
};

//给结构体变量起别名
typedef struct Stu1{
	char name[20];
	int age;
	char sex[5];
}Stu1;
// 自定义一个strcpy函数
//版本一：
void strcpys(char * desc,char* src){

	while (*src!='\0'){
		*desc = *src;
		desc++;
		src++;
	}
	*desc = *src;

}

// 自定义一个strcpy函数
//版本二(优化版本一)：
void strcpys2(char * desc, char* src){

	while ( *desc++ = *src++){
		;		
	}
}

// 自定义一个strcpy函数
//版本三（解决目标文件和源文件为NULL)：
void strcpys3(char * desc, char* src){
	if (desc != NULL  && src != NULL){
		while (*desc++ = *src++){
			;
		}
	}
}

// 自定义一个strcpy函数
//版本四（优化版本三)：
void strcpys4(char * desc, char* src){
	
	assert(desc!=NULL);//断言  表达式为真，没有任何事情发生
	assert(src != NULL);//     表达式为假，则输出错误信息。
	while (*desc++ = *src++){
		;
	}
	
}

// 自定义一个strcpy函数
//版本四（仿制数据源被修改,增添目标数组地址返回值，使该函数可以用于链式函数)：
char* strcpys5(char * desc,const char* src){

	char* c = desc;
	assert(desc != NULL);
	assert(src != NULL);
	while (*desc++ = *src++){
		;
	}
	return c;

}
//int main(){

	//自定义一个strcpy函数
	
	//char arr1[] = "#########";
	//char arr2[] = "bit";
	//
	
	/*
		注意：
			1.分析参数设计（命名，类型），返回值类型的设计
			2.注意野指针、空指针的危害
			3.assert的使用
			4.参数部分const的使用
			5.注释的添加
	*/
	//printf(strcpys5(arr1, arr2));


	
	//调试bug

	/*int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	for (i = 0; i <= 12; i++){
		printf("haha");

		arr[i] = 0;
	}*/


	

	








	//struct Stu s = {"name",1,"a"};
	//Stu1 s1;






//	return 0;
//}

