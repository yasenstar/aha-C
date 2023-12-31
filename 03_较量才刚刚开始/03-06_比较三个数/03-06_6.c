#include <stdio.h>
#include <stdlib.h>
int main()
{
	// 闰年：能被4整除、但不能被100整除；或能被400整除的年份
    int year;
    printf("请输入一个年份，我来告诉你是否是闰年\n");
    scanf("%d", &year);
    if ( ( year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 ) )
		printf("年份%d是闰年\n", year);
    else
		printf("年份%d不是闰年\n", year);
	system("pause");
	return 0;
}
