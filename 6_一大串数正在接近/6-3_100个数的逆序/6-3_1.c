#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5], i;
    for (i=0;i<=4;i++) {
		scanf("%d", &a[i]);
    }
    for (i=0;i<=4;i++) {
		printf("%d %d\n", i, a[i]);
    }
    printf("===============\n");
    for (i=4;i>=0;i--) {
		printf("%d %d\n", i, a[i]);
    }
    printf("===============\n");
    for (i=0;i<=4;i++) {
		printf("%d %d\n", 4-i, a[4-i]);
    }
	system("pause");
	return 0;
}
