#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    printf("请输入一个整数：");
    scanf("%d", &a);
    if (a % 10 == 7)
		{
			printf("yes, 末尾是7\n");
        }
    else
		{
			printf("no, 末尾不是7\n");
        }
	system("pause");
	return 0;
}
