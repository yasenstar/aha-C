#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[1001], i, j, t, n, count;
    srand((unsigned)time(NULL));
    for (i=0;i<=1000;i++) {
		a[i]=0;
    }
    printf("请输入要产生多少个0~1000的随机数：");
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
		t = rand()%1000;
		a[t]++;
    }
    count=0;
    for (i=0;i<=1000;i++) {
		if (a[i]!=0) {count++;}
		for (j=1;j<=a[i];j++) {
			printf("%d ", i);
        }
    }
    printf("\n%d\n", count);
	system("pause");
	return 0;
}
