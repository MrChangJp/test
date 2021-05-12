#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>
#include<errno.h>
#include<string.h>
//fopen/fclose/fgetc/fputc
void test1(){

	
	FILE* wf = fopen("test.txt", "w");
	if (wf == NULL){
		printf(strerror(errno));
		return;
	}

	char ls[] = "hello world";
	int i = 0;
	for (i = 0; i < 11 && ls[i] != '\0'; i++){
		fputc(ls[i], wf);
	}
	fclose(wf);
	wf = NULL;
	FILE* rf = fopen("test.txt", "r");
	if (rf == NULL){
		printf(strerror(errno));
		return;
	}
	int c = 0;

	
	while ((c = fgetc(rf)) != EOF){
		printf("%c", c);
	} 
	fclose(rf);
	rf = NULL;


}
//fputs/fgets
void test2(){

	FILE* rf = fopen("test.txt","r");
	char arr[1024] = { 0 };

	fgets(arr,1024,rf);
	printf(arr);

	fclose(rf);
	rf = NULL;

	FILE* wf = fopen("test.txt", "w");
	char arr1[] = "hello worldsadas das das d";

	fputs(arr1, wf);


	fclose(wf);
	wf = NULL;
}
struct s{
	int a ;
	char b ;
	float c;

} s1,s2;
//fscanf/fprint
void test3(){

	FILE* rf = fopen("test.txt", "r");

	int duan = fscanf(rf,"%d %c %f",&s1.a,&s1.b,&s1.c);
	printf("%d\n",duan);


	fclose(rf);
	rf = NULL;

	FILE* wf = fopen("test.txt", "w");
	s1.a = 1;
	s1.b = 'a';
	s1.c = 12;
	int bitys = fprintf(wf,"%d %c %f",s1.a,s1.b,s1.c);
	printf("%d",bitys);

	fclose(wf);
	wf = NULL;
}
//fread/fwrite
void test4(){
	FILE* rf = fopen("test.txt", "r");
	char arr[1024] = { 0 };
	int returnNum = fread(arr,sizeof(char),10,rf);

	printf("AAAAA%s\n",arr);
	printf("AAAAAA%d\n",arr);

	fclose(rf);
	rf = NULL;
	
	FILE* wf = fopen("test.txt", "w");
	char arr1[1024] = "sdfghjklxdhjkldfghjk";

	returnNum = fwrite(arr1, sizeof(arr1[0]), 100, wf);

	
	printf("%d\n", returnNum);

	fclose(wf);
	wf = NULL;
}

//sscanf/sprintf
void test5(){
	

	s1.a = 10;
	s1.b = 'a';
	s1.c = 10.1f;

	char arr[20] = {0 };
	//�����ݴ洢���ַ������С�
	int num1= sprintf(arr, "%d %c %f", s1.a, s1.b, s1.c);
	printf("%d\n",num1);
	int a1 = 0;
	char b1 = '0';
	float c1 = 0.0;

	int num2 = sscanf(arr, "%d %c %f", &(s2.a), &(s2.b), &(s2.c));
	printf("%d %c %f\n", s2.a, s2.b,s2.c);
	printf("%d\n", num2);
	int aa = 0;

	//sscanf(arr, "%d %c %f", &(s1.a), &(s1.b), &(s1.c));
	//sscanf(arr, "%d", aa);
	//printf("%d %c %f", s1.a, s1.b, s1.c);
	//printf("%d ", aa);

}
//fgetc/fputc
void test6(){
	//���ļ��л�ȡ�����ַ��������ļ���д�뵥���ַ�
	//int fputc(int c,FILE* stream); ����ֵΪд���ַ���ascll,����ʧ�ܣ�����EOF
	//int fgetc(FILE* stream); ���ʼ����ֶ�ȡһ���ַ�����ȡʧ�ܻ�ĩβ����EOF
	//FILE* pf = fopen("test.txt","r");
	//int c = 0;
	//while ((c = fgetc(pf))!=EOF){
	//	printf("%c",c);
	//}

	//fclose(pf);

	FILE* pf = fopen("test.txt", "w");

	char arr[] = "aarwgstrdfutggbsd";

	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++){
		fputc(arr[i],pf);
	}

	fclose(pf);

}
//fputs / fgets
void test7(){
	//fgets ��ȡָ�������Ĵ�СԪ�ء��������ַ�
	//fputs ���ļ������ָ�����ݵ�Ԫ�ء��������طǸ�ֵ�����򷵻�EOF
	//FILE* pf = fopen("test.txt","r");

	char arr[1024] = { 0 };

	// char* a = fgets(arr,1024,pf);
	//printf(a);
	//printf("\n%d\n",num );
	FILE* pf = fopen("test.txt", "w");
	int num = fputs("asdgjghgfzdxvxghsFASfzshrae",pf);

//	printf(a);
	printf("\n%d\n", num);


}

//fprintf / fscanf
void test8(){
	//fprintf��FILE* filePoint,char* format...������д����ֽ��� ������򷵻�С��0��
	//fscanf(FILE* filePoint,char* format...); ���ض�ȡ�Ķ�����������β����EOF

	FILE* pf = fopen("test.txt", "w");
	//int a = 0;
	//char arr[100] = { 0 };
	//float f = 0.1f;
	//fscanf(pf,"%d %s %f",&a,arr,&f);//���ؽ������ֶ���
	//printf("%d %s %f", a, arr, f);

	//fclose(pf);
	//pf = NULL;

	int a = 22;
	char arr[100] = "q233agsdvv";
	float f = 0.1f;

	fprintf(pf, "%d %s %f", a, arr, f);//����ֵΪд����ֽ���

	fclose(pf);
	pf = NULL;
}

//sscanf  /  sprintf
void test9(){
	//sscanf();����ֵΪ�������ֶ���
	//sprintf(); ����ֵΪ���������ֽ���
	//FILE* pf = fopen("test.txt", "��");

	char arr[30] = {0};

	sprintf(arr,"%d %s %f",100,"q32rfasd",3.22);
	printf(arr);
	int a = 0;
	char b[50] = { 0 };
	float c = 0.1f;

	sscanf(arr, "%d %s %f", &a, b, &c);

	printf("\n%d %s %f", a, b, c);


	//	fclose(pf);
	//	pf = NULL;
	//}
}
#include<string.h>
//fread / fwrite
void test10(){
	//fread(char* arr,size_t weight,size_t num ,FILE* file) ����ֵΪ��ȡ���ֶ���
	//fwread(char* arr,size_t weight,size_t num ,FILE* file);

	FILE* pf = fopen("test.txt", "w");
	char arr[100] = "dsljflsdkhglksdfhlkfsdhg";
	int num = fwrite(arr, sizeof(char), 100, pf);

	printf("%d\t", num);
	/*char arr[100] = { 0 };
	int num = fread(arr,sizeof(char),100,pf);
	printf("%d\t%s\n%d", num, arr,strlen(arr));*/
	fclose(pf);
	pf = NULL;
}


int main(){
	test10();
	return 0;
}