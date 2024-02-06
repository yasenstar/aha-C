#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,e;
    printf("please input 5 numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("%d %d %d %d %d", e, d, c, b, a);
	system("pause");
	return 0;
}
