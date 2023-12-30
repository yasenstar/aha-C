#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    printf("请输入一个自然数：");
    scanf("%d", &a);
    if (a % 2 == 0) {
		printf("Yes, 你输入的数是一个偶数\n");
    }
    if (a % 2 != 0) {
		printf("No, 你输入的数是一个奇数\n");
    }
	system("pause");
	return 0;
}
