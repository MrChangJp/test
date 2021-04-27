#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
//匿名结构体
//设置默认对齐数
#pragma pack(4)
struct stu{
	char name;
	double age;
}student;
#pragma pack()

//结构体的自引用
struct {
	char name[20];
	int age;
	//自己以用自己的结构体变量是错误的！
	//struct stu students;
	//struct stu* students;
	//类型编译器会报错
	//stu st;
}stu;

//结构体-位段
struct wd{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

enum sex{
	MALE,
	FEMALE,
	SECRET
};

union u{
	char a;
	int b;

};
//利用联合求大小端的问题

int func(){

	union {
		int i;
		char j;
	}u;
	u.i = 1;
	return u.j;
}

union un{
	char s;
	char arr[10];
};

int main(){
	union un se;
	printf("%d\n", sizeof(se));

	//if (func()){
	//	printf("小端\n");
	//}else{
	//	printf("大端\n");
	//}


	//struct wd s = {0};
	//s.a = 10;
	//s.b = 20;
	//s.c = 3;
	//s.d = 4;

	//printf("a:%d\nb:%d\nc:%d\nd:%d\n", s.a, s.b, s.c, s.d);

	//printf("%d", sizeof(struct wd));

	return 0;
}