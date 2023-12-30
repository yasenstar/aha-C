#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    printf("请输入一个整数：");
    scanf("%d", &a);
    if (a % 2 == 0)
		{
			printf("yes, 输入的是一个偶数\n");
        }
    else
		{
			printf("no, 输入的是一个奇数\n");
        }
	system("pause");
	return 0;
}
