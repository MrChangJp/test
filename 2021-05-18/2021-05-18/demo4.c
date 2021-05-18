//#define _CRT_SECURE_NO_WARNINGS 10
//
//#include<stdio.h>
//#include<string.h>
//
//int strstrs(const char* dest,const char* src){
//	int index = -1;
//
//	if (!*src){
//		return 0;
//	}
//	int len = strlen(dest);
//	const char* cd = dest;
//	const char* cs = src;
//	const char* csStart = src;
//	const char* cdIndex = dest;
//
//	while ((*dest)){
//		cdIndex = dest;
//		csStart = cs;
//		while ((*cdIndex) == (*csStart) && (*csStart) &&(*cdIndex)){
//
//			cdIndex++;
//			csStart++;
//
//		}
//		if (!*csStart){
//			return index+1;
//		}
//
//		index++;
//		dest++;
//	}
//
//
//
//
//
//
//
//
//
//
//	return index;
//}
//
//int main(){
//
//	char arr[] = "asdfghjkl";
//	char cArr[] = "ghjkl";
//
//	int index =  strstrs(arr,cArr);
//
//	if (!index){
//		printf("子字符串为NULL\n");
//		
//	}
//	else if (index > 0){
//		printf("找到了，下标为：%d\n", index);
//	}
//	else{
//		printf("未找到！\n");
//	}
//	
//	
//	return 0;
//}