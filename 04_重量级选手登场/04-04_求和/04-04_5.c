#include <stdio.h>
#include <stdlib.h>
int main()
{
	//输入一个整数，给出这个数的阶乘
    int result, a;
    printf("请输入一个正整数: ");
    scanf("%d", &a);
    result = 1;
    while (a>=1)
    {
		result = result * a;
        if (a > 1)
			printf("%d x ", a);
        a = a - 1;
    }
    printf("= %d\n", result);
	system("pause");
	return 0;
}
