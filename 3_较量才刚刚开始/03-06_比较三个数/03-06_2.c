#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
    // ������̵���
    printf("���������������������ҵ������Ǹ�\n");
    printf("��һ������");
    scanf("%d", &a);
    printf("�ڶ�������");
    scanf("%d", &b);
    printf("����������");
    scanf("%d", &c);
    // �Ƚϴ�С
    if (a>=b && a>=c) { printf("������������� %d, %d, %d �е����ֵ�ǣ�%d\n", a, b, c, a); }
	if (b>a && b>=c) { printf("������������� %d, %d, %d �е����ֵ�ǣ�%d\n", a, b, c, b); }
    if (c>a && c>b) { printf("������������� %d, %d, %d �е����ֵ�ǣ�%d\n", a, b, c, c); }
	system("pause");
	return 0;
}
