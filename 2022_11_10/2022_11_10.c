#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a>b,a=b+10,a,b=a+1);//���ű��ʽ
//	printf("c=%d\n",c);
//	return 0;
//}

//int main()
//{
//	//����һ���ṹ������
//	struct Stu
//	{
//		char name[20];
//		int age;
//		char id[20];
//	};
//	struct Stu s1 = { "����",24,"107552002769"};
//	struct Stu* p = &s1;
//	printf("����:%s ����:%d ѧ��:%s", p->name, p->age, p->id);//ʹ��ָ���ӡ�ṹ�����
//	//printf("����:%s ����:%d ѧ��:%s", s1.name,s1.age,s1.id);
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 �ضϣ�char����ֻ�ܱ���8��bit,����0�Ƿ���λ
//	char b = 127;
//	//00000000000000000000000011111111
//	//01111111  char�ضϣ�0�Ƿ���λ
//
//	char c = a + b;
//	//c=10000010 1�Ƿ���λ
//	//ǿ������ת��c�ǲ��룬��Ҫת��Ϊԭ�� 
//	//11111111111111111111111110000010 -����
//	//11111111111111111111111110000001 -����
//	//10000000000000000000000001111110 -ԭ�� ����λ���䣬��λȡ��
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
//	while (q != NULL)//ָ��ʹ��֮ǰ�����Ч��
//	{
//		//
//	}
//	p = NULL;//��ʹ�� p����Ϊ��
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
////1.�����ַ����ĳ��ȣ�����ָ��-ָ��ķ���
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

//ָ������
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