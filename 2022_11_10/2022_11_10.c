#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a>b,a=b+10,a,b=a+1);//逗号表达式
//	printf("c=%d\n",c);
//	return 0;
//}

//int main()
//{
//	//创建一个结构体类型
//	struct Stu
//	{
//		char name[20];
//		int age;
//		char id[20];
//	};
//	struct Stu s1 = { "张三",24,"107552002769"};
//	struct Stu* p = &s1;
//	printf("姓名:%s 年龄:%d 学号:%s", p->name, p->age, p->id);//使用指针打印结构体变量
//	//printf("姓名:%s 年龄:%d 学号:%s", s1.name,s1.age,s1.id);
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 截断，char类型只能保留8个bit,其中0是符号位
//	char b = 127;
//	//00000000000000000000000011111111
//	//01111111  char截断，0是符号位
//
//	char c = a + b;
//	//c=10000010 1是符号位
//	//强制整型转换c是补码，需要转换为原码 
//	//11111111111111111111111110000010 -补码
//	//11111111111111111111111110000001 -反码
//	//10000000000000000000000001111110 -原码 符号位不变，按位取反
//	printf("%d", c);
//	return 0;
//}
	
//int main()
//{
//	int a = 10;
//	char b = 'w';
//	int* pa = &a;
//	char* pb = &b;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pb));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 0;
//	//char* pa = &a;
//	//*pa = 0;
//	return 0;
//} 
//int main()
//{
//	int a = 10;
//	int* p=&a;
//	*p = 10;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* q = NULL;
//	while (q != NULL)//指针使用之前检查有效性
//	{
//		//
//	}
//	p = NULL;//不使用 p了置为空
//	return 0;
//
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//#include<stdio.h>
////1.计算字符串的长度，采用指针-指针的方法
//int main()
//{
//	char arr[] = "abcdef";
//	int len=my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = &arr[0];
//	int* p2 = &arr[9];
//	printf("%d",p1-p2);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d \n", *(p + i));
//	}
//	return 0;
//}

//指针数组
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = 3;
//	int e = 4;
//	int i = 0;
//	int* arr[] = {&a,&b,&c,&d,&e};
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", *(arr[i]));
//	}
//	return 0;
//}

int main()
{
	int data1[] = { 1,2,3,4,5 };
	int data2[] = { 2,3,4,5,6 };
	int data3[] = { 3,4,5,6,7 };
	int* arr[] = { &data1,&data2,&data3 };
	for (int i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
	return 0;
}