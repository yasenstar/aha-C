#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
    printf("������������ͬ������лл��\n");
    printf("��һ�����ǣ�");
    scanf("%d", &a);
    printf("�ڶ������ǣ�");
    scanf("%d", &b);
    if (a > b)
	{
		c = a;
	}
    else
	{
		c = b;
	}
    printf("����������нϴ����%d\n", c);
	system("pause");
	return 0;
}
