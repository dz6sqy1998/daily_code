#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble_sort(int* arr, int sz)
{
	//int sz = sizeof(arr) / sizeof(arr[0]);//因为传进来的arr是一个指针，保存的是首元素的
	//地址所以arr的属性无从得知，需要一开始就把sz传递进来，
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//初始化，假设已经排好序了
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//flag=0说明还没有排好序
			}
		}
		if (flag == 1)
			break;

	}

}

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);//数组传参时，实际上传过去的是数组首元素的地址
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d\n", arr[i]);
	return 0;
}
//不使用额外变量，临时变量
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前: a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后: a=%d b=%d\n", a, b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int b=a << 1;
//	printf("%d", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 10;
//	int tmp = 0;
//	printf("交换前:%d %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("交换后:%d %d\n", a, b);
//	return 0;
//}
//
//统计num中的补码中有多少个1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))//按位与和右移操作符
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);//二进制序列左移2位乘4
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("%d\n",b);
//	printf("%d", a);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//a=1已经确定了，所以后面的都不用改变了，都不执行
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b&& d++;//a=1但后面还有很多需要确定
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}