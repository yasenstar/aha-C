#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("====��ӭʹ���ַ��ͼ�����====\n");
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
