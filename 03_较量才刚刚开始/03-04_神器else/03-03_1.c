#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    printf("������һ��������");
    scanf("%d", &a);
    if (a % 2 == 0)
		{
			printf("yes, �������һ��ż��\n");
        }
    else
		{
			printf("no, �������һ������\n");
        }
	system("pause");
	return 0;
}
