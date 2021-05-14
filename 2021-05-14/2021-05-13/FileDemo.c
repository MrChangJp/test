#define _CRT_SECURE_NO_WARNINGS 10

#include<string.h>
#include<stdio.h>
//
//#define CAT( X , Y)  X##Y
//int main(){
//
//	int Class23 = 1024;
//	printf("%d", CAT(Class, 23));
//
//	return 0;
//}

#define PRINTF(X) printf("this is "#X" value is %d",X);
int main(){

	int a = 10;
	PRINTF(a);

	return 0;
}





//#define ADD(X) X+X
//int main(){
//
//	int a = 5;
//	printf("%d",10*ADD(a));
//
//	return 0;
//}



//int main(){

	//FILE * pf = fopen("test.txt","w");

	//char * arr = "saofasdjfsadf";

	//int c = fprintf(pf,"%d",1234);

	//printf("%d",c);

	//fclose(pf);
	//pf = NULL;
//#pragma pack()
	//char arr[1024] = "123fdkjasfhkjabg";
	/*int sz = fread(arr,sizeof(char),1024,pf);*/
	//int sz = fwrite(arr, sizeof(char), 1024, pf);

	//int c = 0;
	////c = fgetc(pf);
	//while ((c = fgetc(pf)) != EOF){
	//	//putchar(c);
	//}
	//printf("%d",c);
	/*int a  = feof(pf);
	if (feof(pf)){
		printf("%d\n",feof(pf));
		printf("文件指针已到末尾！\n");
	}
	else{
		printf("为到末尾\n");
	}
	printf("%d", a);*/
	//if ()

	/*printf("sz = %d\n",sz);
	printf("arr = %s",arr);*/

//	return 0;
//}