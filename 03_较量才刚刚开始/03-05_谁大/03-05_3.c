#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
    printf("�������������������ҵ�һ�����ϴ��������жϵڶ������Ƿ��ǵ�һ������Լ��\n");
    printf("��һ������");
    scanf("%d", &a);
    printf("�ڶ�������");
    scanf("%d", &b);
    if ( a % b == 0)
    { printf("yes"); }
    else
    { printf("no"); }
	system("pause");
	return 0;
}
