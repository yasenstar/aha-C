#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
    printf("����һ���ӷ�����������ӭ��ʹ��\n");
    printf("-------------------------------\n");
    printf("�������һ�����������س���\n");
    scanf("%d", &a);
    printf("������ڶ������������س���\n");
    scanf("%d", &b);
    c = a + b;
    printf("���ǵĺ���\n");
    printf("%d + %d = %d\n", a, b, c);
	system("pause");
	return 0;
}
