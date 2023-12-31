#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, d;
    // 读入键盘的数
    printf("请输入三个数，我们来找到最小的那个\n");
    printf("第一个数：");
    scanf("%d", &a);
    printf("第二个数：");
    scanf("%d", &b);
    printf("第三个数：");
    scanf("%d", &c);
    // 比较大小
    if (a < b) { d = a; }
    else { d = b; }
    if (d > c) { d = c; }
    // 输出最大值
    printf("你输入的三个数 %d, %d, %d 中的最小值是：%d\n", a, b, c, d);
	system("pause");
	return 0;
}
