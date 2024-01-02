#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a;
    printf("请输入任意字符：");
    scanf("%c", &a);
    printf("后面的一个字符是%c\n", a-1);
	system("pause");
	return 0;
}
