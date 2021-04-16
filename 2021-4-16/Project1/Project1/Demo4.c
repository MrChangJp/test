//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int intCmp(const void* e1, const void* e2){
//	//降序
//	//return (int*)e1 - (int*)e2;
//	//升序
//	return (int*)e2 - (int*)e1;
//}
//
//void swp(char* e1,char*e2){
//	char temp = *e1;
//	*e1 = *e2;
//	*e2 = temp;
//	e1++;
//	e2++;
//}
//
//void allSorts(const void* data, int size, int weight, int(*pf)(const void* e1, const void* e2)){
//
//	for (int i = 0; i < size - 1; i++){
//		for (int j = 0; j < size - i - 1; j++){
//			if ( pf(((char*)data +j*weight),((char*)data +(j+1)*weight)) >0 ){
//				swp(((char*)data + j*weight), ((char*)data + (j + 1)*weight));
//			}
//		}
//	}
//
//
//}
//
////万能冒泡排序
//void test1(){
//
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	allSorts(arr, size, sizeof(arr[0]), intCmp);
//	for (int j = 0; j < size; j++){
//		printf("%d ",arr[j]);
//	}
//
//
//}
//
//
//void main(){
//	//test1();
//	char arr[3] = { 'a', 'b', 'c' };
//	
//
//
//
//
//	//一维数组
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));     // sizeof(a)是数组的首地址，计算的是数组的总大小。16
//	printf("%d\n", sizeof(a + 0));// a+0 a是数组首元素地址，a+0 表示首元素的地址。 4
//	printf("%d\n", sizeof(*a));   // a是数组首元素地址，*a是对首元素的解引用。 4
//	printf("%d\n", sizeof(a + 1));// a是元素的首地址，a+1表示数组第二个元素的地址。4
//	printf("%d\n", sizeof(a[1])); // a[1]表示数组的第2个元素。4
//	printf("%d\n", sizeof(&a));   // &a 表示数组a的地址。 4
//	printf("%d\n", sizeof(*&a));  // &a 表示数组a的地址，*&a 解引用数组a的地址，表示首地址的元素。 16
//	printf("%d\n", sizeof(&a + 1));//&a 表示数组a的地址，&a+1表示指针向后移动一个数组大小。4
//	printf("%d\n", sizeof(&a[0]));// a先与[0]结合表示数组中第一个元素，然后取其地址。 4
//	printf("%d\n", sizeof(&a[0] + 1));//a先与[0]结合表示数组中第一个元素，然后取其地址,再加1。4
//	//字符数组
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//arr数组的首地址，sizeof（arr）表示arr整个数组的大的小。6    
//	printf("%d\n", sizeof(arr + 0));//arr+0表示数组的首元素的地址。4/8
//	printf("%d\n", sizeof(*arr));// *arr 表示解引用数组首地址。 1
//	printf("%d\n", sizeof(arr[1]));//arr[1]表示数组的第2个元素,等同于*(a+1）。1
//	printf("%d\n", sizeof(&arr));//&arr表示数组的地址。4/8
//	printf("%d\n", sizeof(&arr + 1));//&arr表示数组的地址，+1表示数组指针向后移动一个数组的大小。4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0]表示arr数组第一个元素的地址，+1指针向后移动一位。4/8
//
//	printf("%d\n", strlen(arr));//随机数
//	printf("%d\n", strlen(arr + 0));//随机数
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr)); //随机数
//	printf("%d\n", strlen(&arr + 1));//随机数 -6
//	printf("%d\n", strlen(&arr[0] + 1));//随机数 -1
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(p + 1));//4
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4
//	printf("%d\n", sizeof(&p + 1));//4
//	printf("%d\n", sizeof(&p[0] + 1));//4
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值（p是个指针，指针内存储着字符串a的地址。）
//	printf("%d\n", strlen(&p + 1));//随机数
//	printf("%d\n", strlen(&p[0] + 1));//5
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//数组的总大小。48
//	printf("%d\n", sizeof(a[0][0]));//二维数组第一个元素。4
//	printf("%d\n", sizeof(a[0]));//一维素组中第一个元素数组的地址。16
//	printf("%d\n", sizeof(a[0] + 1));//一维数组首地址+1后的第二个数组的数组地址4
//	printf("%d\n", sizeof(*(a[0] + 1)));//解引用第一个数组的第二个元素。4
//	printf("%d\n", sizeof(a + 1));//相当于第二个数组的地址。4
//	printf("%d\n", sizeof(*(a + 1)));//相当于第二个数组的首元素地址16
//	printf("%d\n", sizeof(&a[0] + 1));//相当于第二行地址4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//相当于二行首元素地址。16
//	printf("%d\n", sizeof(*a));//a是首元素，第一行的地址，解引用*a是第一行的首地址。16
//	printf("%d\n", sizeof(a[3]));//16
//
//	
//
//}
//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
////程序的结果是什么？2,5
//
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？0x00100014,0x00100001,0x00100004.
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}
//
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//0x00000004,0x00000002.		
//	return 0;
//}