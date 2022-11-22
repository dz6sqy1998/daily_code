#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		printf("%d\n", i);
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
#include<assert.h>
void my_strcpy(char* dest, char* src)
{
	assert(dest!=NULL);
	assert(src != NULL);
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
}

#include<stdio.h>
int main()
{
	char* p = NULL;
	char arr1[] = "hello qiyang";
	char arr2[20] = "xxxxxxxxxxxxxxxxxxxxx";
	my_strcpy(p, arr1);
	printf("%s\n", arr1);
	return 0;

}