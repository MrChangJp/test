#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>

//判断两值是否相同
void test1(){

	char arr1[] = "abcdefg";
	char arr2[] = "abcdefg";

	char* p1 = "abcdefg";
	char* p2 = "abcdefg";

	if (arr1 == arr2){
		printf("haha");
	}
	else{
		printf("hehe");
	}

}
//判断两值是否相同
void test2(){


	char arr1[] = "abcdefg";
	char arr2[] = "abcdefg";

	char* p1 = "abcdefg";
	char* p2 = "abcdefg";

	if (p1 == p2){
		printf("haha");
	}
	else{
		printf("hehe");
	}

}
//指针数组
void test3(){

	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 2, 3, 4, 5, 6 };
	int arr3[] = { 3, 4, 5, 6, 7 };

	int* p[3] = { arr1, arr2, arr3 };

	int i = 0;
	for (i = 0; i < 3; i++){

		int j = 0;
		for (j = 0; j < 5; j++){
			printf("%d ", *(p[i] + j));
		}
		printf("\n");
	}
}
void test4(int(*p)[5]){
	int i = 0;
	for (i = 0; i < 3; i++){
		int j = 0;
		for (j = 0; j < 5; j++){
			printf("%d ",*(*(p+i)+j) );
		}
		printf("\n" );
	}

	//printf("%d", );

}

//函数指针的调用
int test5(int x){


	return x;
}

//计算机 加
int Add(int x,int y){
	return x + y;
}
//计算机 减
int Min(int x, int y){
	return x - y;
}
//计算机 乘
int Mul(int x, int y){
	return x * y;
}
//计算机 除
int Div(int x, int y){
	return x / y;
}
//计算机菜单
void menu(){
	printf("*******************\n");
	printf("*** 1、加 2、减 ***\n");
	printf("*** 3、乘 4、除 ***\n");
	printf("***** 0、退出 *****\n");
	printf("*******************\n");
}
//计算机入口 方法一
void test6(){
	int input = 0;

	int(*func[4])(int, int) = {Add,Min,Mul,Div};
	do{
		menu();
		printf("请输入功能按键>");
		scanf("%d", &input);
		int x = 0, y = 0;
		switch (input){
		case 1:printf("请输入两个操作数，空格隔开>");
			
			scanf("%d %d", &x, &y); printf("%d\n", func[0](x, y)); break;
		case 2:printf("请输入两个操作数，空格隔开>");
	
			scanf("%d %d", &x, &y); printf("%d\n", func[1](x, y)); break;
		case 3:printf("请输入两个操作数，空格隔开>");

			scanf("%d %d", &x, &y); printf("%d\n", func[2](x, y)); break;
		case 4:printf("请输入两个操作数，空格隔开>");

			scanf("%d %d", &x, &y); printf("%d\n", func[3](x, y)); break;
		case 0:break;
		default:printf("输入有误，请重新输入！\n"); break;
		}

	} while (input);
	printf("程序退出。\n");

}

//计算机入口 方法二
void test7(){
	int input = 0;

	int(*func[])(int, int) = { 0,Add, Min, Mul, Div };
	do{
		menu();
		printf("请输入功能按键>");
		scanf("%d", &input);
		int x = 0, y = 0;
		
		if (input > 0 && input <= sizeof(func) / sizeof(func[0])){
			printf("请输入两个操作数，空格隔开>");
			scanf("%d %d", &x, &y);
			printf("%d\n", func[input](x, y));
		}else
		if (input == 0){
			printf("程序退出。\n");
		}
		else{
			printf("输入有误，请重新输入！\n");
		}
	
		

	} while (input);

}

struct persion{
	char arr[20];
	int age;
};

int cmps(const void* e1,const void* e2){

	return (((struct persion*)e1)->age) - (((struct persion*)e2)->age);

}
//根据char类型每次交换一个字节的数据
void swp(char* e1, char* e2,int weight){
	int i = 0;
	for (i = 0; i < weight; i++){
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;
	}
}
//万能排序方法
void ASort(void* arr,int size,int weight,int (*func)(const void* e1,const void* e2)){

	int i = 0;
	for (i = 0; i < size - 1; i++){
		int j = 0;
		for (j = 0; j < i - 1; j++){
			//以字节为单位，传递数组的每个首元素地址。然后根据元素的整体大小移步指针。
			if (func(((char*)arr + j*weight), (char*)arr + (j + 1)*weight) > 0){

				swp((char*)arr + j*weight, (char*)arr + (j + 1)*weight, weight);

			}
		}
	}
}


//自定义万能冒泡排序
void test8(){
	struct persion per[3] = { { "aname", 21 }, { "cname", 12 }, { "bname", 23 } };
	int sz = sizeof(per) / sizeof(per[0]);
	//qsort(per, sz, sizeof(per[0]), cmps);

	ASort(per,sz,sizeof(per[0]),cmps);


	int i = 0;
	for (i = 0; i < 3; i++){
		printf("name->%s  age->%d\n", per[i].arr, per[i].age);
	}
}


int main(){

	//struct persion per[3] = { { "aname",21 }, {"cname",12}, {"bname",23} };
	//int sz = sizeof(per) / sizeof(per[0]);
	//qsort(per,sz,sizeof(per[0]),cmps);
	//int i = 0;
	//for (i = 0; i < 3; i++){
	//	printf("name->%s  age->%d\n",per[i].arr,per[i].age);
	//}

	test8();

	//计算器
//	test7();



	//int(*p)(int) = test5;
	////其结果都是一样的。
	//printf("%d ", (*p)(5));
	//printf("%d ", (**p)(5));
	//printf("%d ", (***p)(5));
	////函数指针也可以不带*调用，但带*必须与指针变量在一个小括号内
	//printf("%d ", p(5));

	//int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };

	//test4(arr);
	return 0;
}