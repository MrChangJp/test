//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int intCmp(const void* e1, const void* e2){
//	//����
//	//return (int*)e1 - (int*)e2;
//	//����
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
////����ð������
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
//	//һά����
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));     // sizeof(a)��������׵�ַ���������������ܴ�С��16
//	printf("%d\n", sizeof(a + 0));// a+0 a��������Ԫ�ص�ַ��a+0 ��ʾ��Ԫ�صĵ�ַ�� 4
//	printf("%d\n", sizeof(*a));   // a��������Ԫ�ص�ַ��*a�Ƕ���Ԫ�صĽ����á� 4
//	printf("%d\n", sizeof(a + 1));// a��Ԫ�ص��׵�ַ��a+1��ʾ����ڶ���Ԫ�صĵ�ַ��4
//	printf("%d\n", sizeof(a[1])); // a[1]��ʾ����ĵ�2��Ԫ�ء�4
//	printf("%d\n", sizeof(&a));   // &a ��ʾ����a�ĵ�ַ�� 4
//	printf("%d\n", sizeof(*&a));  // &a ��ʾ����a�ĵ�ַ��*&a ����������a�ĵ�ַ����ʾ�׵�ַ��Ԫ�ء� 16
//	printf("%d\n", sizeof(&a + 1));//&a ��ʾ����a�ĵ�ַ��&a+1��ʾָ������ƶ�һ�������С��4
//	printf("%d\n", sizeof(&a[0]));// a����[0]��ϱ�ʾ�����е�һ��Ԫ�أ�Ȼ��ȡ���ַ�� 4
//	printf("%d\n", sizeof(&a[0] + 1));//a����[0]��ϱ�ʾ�����е�һ��Ԫ�أ�Ȼ��ȡ���ַ,�ټ�1��4
//	//�ַ�����
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//arr������׵�ַ��sizeof��arr����ʾarr��������Ĵ��С��6    
//	printf("%d\n", sizeof(arr + 0));//arr+0��ʾ�������Ԫ�صĵ�ַ��4/8
//	printf("%d\n", sizeof(*arr));// *arr ��ʾ�����������׵�ַ�� 1
//	printf("%d\n", sizeof(arr[1]));//arr[1]��ʾ����ĵ�2��Ԫ��,��ͬ��*(a+1����1
//	printf("%d\n", sizeof(&arr));//&arr��ʾ����ĵ�ַ��4/8
//	printf("%d\n", sizeof(&arr + 1));//&arr��ʾ����ĵ�ַ��+1��ʾ����ָ������ƶ�һ������Ĵ�С��4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0]��ʾarr�����һ��Ԫ�صĵ�ַ��+1ָ������ƶ�һλ��4/8
//
//	printf("%d\n", strlen(arr));//�����
//	printf("%d\n", strlen(arr + 0));//�����
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr)); //�����
//	printf("%d\n", strlen(&arr + 1));//����� -6
//	printf("%d\n", strlen(&arr[0] + 1));//����� -1
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
//	printf("%d\n", strlen(&arr + 1));//���ֵ
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
//	printf("%d\n", strlen(&p));//���ֵ��p�Ǹ�ָ�룬ָ���ڴ洢���ַ���a�ĵ�ַ����
//	printf("%d\n", strlen(&p + 1));//�����
//	printf("%d\n", strlen(&p[0] + 1));//5
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//������ܴ�С��48
//	printf("%d\n", sizeof(a[0][0]));//��ά�����һ��Ԫ�ء�4
//	printf("%d\n", sizeof(a[0]));//һά�����е�һ��Ԫ������ĵ�ַ��16
//	printf("%d\n", sizeof(a[0] + 1));//һά�����׵�ַ+1��ĵڶ�������������ַ4
//	printf("%d\n", sizeof(*(a[0] + 1)));//�����õ�һ������ĵڶ���Ԫ�ء�4
//	printf("%d\n", sizeof(a + 1));//�൱�ڵڶ�������ĵ�ַ��4
//	printf("%d\n", sizeof(*(a + 1)));//�൱�ڵڶ����������Ԫ�ص�ַ16
//	printf("%d\n", sizeof(&a[0] + 1));//�൱�ڵڶ��е�ַ4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//�൱�ڶ�����Ԫ�ص�ַ��16
//	printf("%d\n", sizeof(*a));//a����Ԫ�أ���һ�еĵ�ַ��������*a�ǵ�һ�е��׵�ַ��16
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
////����Ľ����ʲô��2,5
//
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�0x00100014,0x00100001,0x00100004.
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