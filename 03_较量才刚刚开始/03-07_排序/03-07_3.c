#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    scanf("%d", &a);
    if (a % 2 == 1)
    {
		printf("%d %d %d\n", a+1, a+2, a+3);
    }
    else
    {
		printf("%d %d %d\n", a-3, a-2, a-1);
    }
	system("pause");
	return 0;
}
