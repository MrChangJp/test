#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
//�����ṹ��
//����Ĭ�϶�����
#pragma pack(4)
struct stu{
	char name;
	double age;
}student;
#pragma pack()

//�ṹ���������
struct {
	char name[20];
	int age;
	//�Լ������Լ��Ľṹ������Ǵ���ģ�
	//struct stu students;
	//struct stu* students;
	//���ͱ������ᱨ��
	//stu st;
}stu;

//�ṹ��-λ��
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
//�����������С�˵�����

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
	//	printf("С��\n");
	//}else{
	//	printf("���\n");
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