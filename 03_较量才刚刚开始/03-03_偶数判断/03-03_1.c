#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    printf("������һ����Ȼ����");
    scanf("%d", &a);
    if (a % 2 == 0) {
		printf("Yes, �����������һ��ż��\n");
    }
    if (a % 2 != 0) {
		printf("No, �����������һ������\n");
    }
	system("pause");
	return 0;
}
