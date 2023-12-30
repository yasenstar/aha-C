#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    printf("请输入一个整数：");
    scanf("%d", &a);
    // check whether it's positive integer 判断是否是正数
    if (a>0) {
        printf("你输入的是正数\n");
    }
    if (a>10) {
        printf("你输入的是一个大于10的正数\n");
    }
    if (a<0) {
		printf("你输入的是负数\n");
    }
    if (a==0) {
		printf("你输入的是0\n");
    }
	system("pause");
	return 0;
}
