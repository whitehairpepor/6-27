#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��i����arr�������release�Ż������ǽ�i��ַ�ȴ�ŵ��͵�ַλ���Բ����arrԽ���ַ��ͬ�Ŀ��ܲ�����ѭ�������ǻᱨ����
	//for (i = 0; i <= 12; i++)
	//{
	//	printf("hehe\n");
	//	arr[i] = 0;
	//}                                          //��Ϊ��ַ�Ĵ���ǴӸߵ��ʹ�ŵ�ַ����������ĵ�ַ�����±������ӵ͵�ַ���ߵ�ַ�ı仯�����Ե���ַԽ����ʿ��ܺ�i��ַ��ͬʱ�ͻ���ѭ����
	printf("%p\n", arr);//�͵�ַ
	printf("%p\n", &i);//�ߵ�ַ
	system("pause");
	return 0;
}