#include <stdio.h>
#include <stdlib.h>
int main()
{
	// 大于1~100中的偶数
	int a;
    a = 2;
    while (a<=100)
    {
		printf("%d ", a);
        a = a + 2;
    }
	system("pause");
	return 0;
}
