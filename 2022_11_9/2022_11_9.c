#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble_sort(int* arr, int sz)
{
	//int sz = sizeof(arr) / sizeof(arr[0]);//��Ϊ��������arr��һ��ָ�룬���������Ԫ�ص�
	//��ַ����arr�������޴ӵ�֪����Ҫһ��ʼ�Ͱ�sz���ݽ�����
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//��ʼ���������Ѿ��ź�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//flag=0˵����û���ź���
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
	bubble_sort(arr, sz);//���鴫��ʱ��ʵ���ϴ���ȥ����������Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		printf("%d\n", arr[i]);
	return 0;
}
//��ʹ�ö����������ʱ����
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ: a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������: a=%d b=%d\n", a, b);
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
//	printf("����ǰ:%d %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("������:%d %d\n", a, b);
//	return 0;
//}
//
//ͳ��num�еĲ������ж��ٸ�1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))//��λ������Ʋ�����
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
//	a = a | (1 << 2);//��������������2λ��4
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
//	i = a++ || ++b || d++;//a=1�Ѿ�ȷ���ˣ����Ժ���Ķ����øı��ˣ�����ִ��
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b&& d++;//a=1�����滹�кܶ���Ҫȷ��
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}