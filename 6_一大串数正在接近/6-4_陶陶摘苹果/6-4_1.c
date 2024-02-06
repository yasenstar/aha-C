#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("====陶陶摘苹果====\n");
    int a[10],h,i,sum;
    sum=0;
    printf("请输入陶陶的高度：\n");
    scanf("%d", &h);
    printf("请按顺序输入10个苹果的高度（100~200），单位为cm，用空格隔开\n");
    for (i=0;i<=9;i++) {
		scanf("%d", &a[i]);
    }
    for (i=0;i<=9;i++) {
		if (a[i]<=h+30) { sum++; }
    }
    printf("陶陶能够摘到%d个苹果！\n", sum);
	system("pause");
	return 0;
}
