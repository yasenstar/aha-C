#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, d, e;
    // ������̵���
    printf("�������ĸ������������ҵ������Ǹ�\n");
    printf("��һ������");
    scanf("%d", &a);
    printf("�ڶ�������");
    scanf("%d", &b);
    printf("����������");
    scanf("%d", &c);
    printf("���ĸ�����");
    scanf("%d", &d);
    // �Ƚϴ�С
    if (a > b) { e = a; }
    else { e = b; }
    if (e < c) { e = c; }
    if (e < d) { e = d; }
    // ������ֵ
    printf("������������� %d, %d, %d, %d �е����ֵ�ǣ�%d\n", a, b, c, d, e);
	system("pause");
	return 0;
}
