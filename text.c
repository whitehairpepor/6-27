#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//当i放在arr后面或者release优化，都是将i地址先存放到低地址位所以不会和arr越界地址相同的可能不会死循环，但是会报错误。
	//for (i = 0; i <= 12; i++)
	//{
	//	printf("hehe\n");
	//	arr[i] = 0;
	//}                                          //因为地址的存放是从高到低存放地址，但是数组的地址随着下标增长从低地址到高地址的变化，所以当地址越界访问可能和i地址相同时就会死循环。
	printf("%p\n", arr);//低地址
	printf("%p\n", &i);//高地址
	system("pause");
	return 0;
}