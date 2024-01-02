#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    printf("请输入一个正整数：");
    scanf("%d", &a);
    if (a < 10)
		{
			printf("你输入的数是一个一位数\n");
        }
    else
		{
			printf("不是一位数\n");
        }
	system("pause");
	return 0;
}
