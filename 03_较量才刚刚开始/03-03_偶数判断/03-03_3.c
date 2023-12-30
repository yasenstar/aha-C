#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    scanf("%d", &a);
    if (a % 10 == 0)
		{ printf("yes, 这个数的末尾是0\n"); }
    if (a % 10 != 0)
		{ printf("no, 这个数的末尾不是0\n"); }
	system("pause");
	return 0;
}
