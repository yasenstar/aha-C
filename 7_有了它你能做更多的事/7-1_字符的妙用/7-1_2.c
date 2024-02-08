#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("====欢迎使用字符型计数器====\n");
    int a, b;
    char c;
    scanf("%d%c%d", &a, &c, &b);
    if (c=='+') { printf("%d %c %d = %d\n", a, c, b, a+b);}
    if (c=='-') { printf("%d %c %d = %d\n", a, c, b, a-b);}
    if (c=='*') { printf("%d %c %d = %d\n", a, c, b, a*b);}
    if (c=='/') { printf("%d %c %d = %d\n", a, c, b, a/b);}
	system("pause");
	return 0;
}
