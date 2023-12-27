#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
    printf("这是一个加法计数器，欢迎您使用\n");
    printf("-------------------------------\n");
    printf("请输入第一个数（完后请回车）\n");
    scanf("%d", &a);
    printf("请输入第二个数（完后请回车）\n");
    scanf("%d", &b);
    c = a + b;
    printf("他们的和是\n");
    printf("%d + %d = %d\n", a, b, c);
	system("pause");
	return 0;
}
