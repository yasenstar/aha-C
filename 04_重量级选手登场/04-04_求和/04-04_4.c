#include <stdio.h>
#include <stdlib.h>
int main()
{
	// 计算1~100所有偶数的和
    int a, sum;
    sum = 0;
    a = 1;
    while (a <= 100)
    {
		if ( a % 2 == 0 )
        {
			sum = sum + a;
            printf("%d ", a);
        }
        a = a + 1;
    }
    printf("\n1~100所有偶数的和是：%d\n", sum);
	system("pause");
	return 0;
}
