#include <stdio.h>
#include <stdlib.h>
int main()
{
	//����һ������������������Ľ׳�
    int result, a;
    printf("������һ��������: ");
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
