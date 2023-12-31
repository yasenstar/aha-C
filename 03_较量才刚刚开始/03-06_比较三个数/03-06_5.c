#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, d, e;
    // 读入键盘的数
    printf("请输入四个数，我们来找到最大的那个\n");
    printf("第一个数：");
    scanf("%d", &a);
    printf("第二个数：");
    scanf("%d", &b);
    printf("第三个数：");
    scanf("%d", &c);
    printf("第四个数：");
    scanf("%d", &d);
    // 比较大小
    if (a > b) { e = a; }
    else { e = b; }
    if (e < c) { e = c; }
    if (e < d) { e = d; }
    // 输出最大值
    printf("你输入的三个数 %d, %d, %d, %d 中的最大值是：%d\n", a, b, c, d, e);
	system("pause");
	return 0;
}
