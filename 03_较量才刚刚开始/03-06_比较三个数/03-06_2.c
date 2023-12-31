#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
    // 读入键盘的数
    printf("请输入三个数，我们来找到最大的那个\n");
    printf("第一个数：");
    scanf("%d", &a);
    printf("第二个数：");
    scanf("%d", &b);
    printf("第三个数：");
    scanf("%d", &c);
    // 比较大小
    if (a>=b && a>=c) { printf("你输入的三个数 %d, %d, %d 中的最大值是：%d\n", a, b, c, a); }
	if (b>a && b>=c) { printf("你输入的三个数 %d, %d, %d 中的最大值是：%d\n", a, b, c, b); }
    if (c>a && c>b) { printf("你输入的三个数 %d, %d, %d 中的最大值是：%d\n", a, b, c, c); }
	system("pause");
	return 0;
}
