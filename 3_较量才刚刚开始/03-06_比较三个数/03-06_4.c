#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, d;
    // ������̵���
    printf("���������������������ҵ���С���Ǹ�\n");
    printf("��һ������");
    scanf("%d", &a);
    printf("�ڶ�������");
    scanf("%d", &b);
    printf("����������");
    scanf("%d", &c);
    // �Ƚϴ�С
    if (a < b) { d = a; }
    else { d = b; }
    if (d > c) { d = c; }
    // ������ֵ
    printf("������������� %d, %d, %d �е���Сֵ�ǣ�%d\n", a, b, c, d);
	system("pause");
	return 0;
}
