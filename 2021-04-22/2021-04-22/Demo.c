#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//�ṹ��Ĵ���
struct Stu{
	char name[20];
	int age;
	char sex[5];
};

//���ṹ����������
typedef struct Stu1{
	char name[20];
	int age;
	char sex[5];
}Stu1;
// �Զ���һ��strcpy����
//�汾һ��
void strcpys(char * desc,char* src){

	while (*src!='\0'){
		*desc = *src;
		desc++;
		src++;
	}
	*desc = *src;

}

// �Զ���һ��strcpy����
//�汾��(�Ż��汾һ)��
void strcpys2(char * desc, char* src){

	while ( *desc++ = *src++){
		;		
	}
}

// �Զ���һ��strcpy����
//�汾�������Ŀ���ļ���Դ�ļ�ΪNULL)��
void strcpys3(char * desc, char* src){
	if (desc != NULL  && src != NULL){
		while (*desc++ = *src++){
			;
		}
	}
}

// �Զ���һ��strcpy����
//�汾�ģ��Ż��汾��)��
void strcpys4(char * desc, char* src){
	
	assert(desc!=NULL);//����  ���ʽΪ�棬û���κ����鷢��
	assert(src != NULL);//     ���ʽΪ�٣������������Ϣ��
	while (*desc++ = *src++){
		;
	}
	
}

// �Զ���һ��strcpy����
//�汾�ģ���������Դ���޸�,����Ŀ�������ַ����ֵ��ʹ�ú�������������ʽ����)��
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

	//�Զ���һ��strcpy����
	
	//char arr1[] = "#########";
	//char arr2[] = "bit";
	//
	
	/*
		ע�⣺
			1.����������ƣ����������ͣ�������ֵ���͵����
			2.ע��Ұָ�롢��ָ���Σ��
			3.assert��ʹ��
			4.��������const��ʹ��
			5.ע�͵����
	*/
	//printf(strcpys5(arr1, arr2));


	
	//����bug

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

