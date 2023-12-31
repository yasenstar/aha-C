#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
    printf("请输入两个不同的数，谢谢：\n");
    printf("第一个数是：");
    scanf("%d", &a);
    printf("第二个数是：");
    scanf("%d", &b);
    if (a > b)
	{
		c = a;
	}
    else
	{
		c = b;
	}
    printf("你输入的数中较大的是%d\n", c);
	system("pause");
	return 0;
}
