#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
    printf("请输入两个正整数，且第一个数较大，我们来判断第二个数是否是第一个数的约数\n");
    printf("第一个数：");
    scanf("%d", &a);
    printf("第二个数：");
    scanf("%d", &b);
    if ( a % b == 0)
    { printf("yes"); }
    else
    { printf("no"); }
	system("pause");
	return 0;
}
