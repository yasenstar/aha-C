#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
    printf("请告诉我你想比较几个数？");
    int n;
    scanf("%d", &n);
    int a[n],i,t,j,k;
    for (i=0;i<=n-1;i++) {
		a[i] = rand()%1000;
    }
    for (i=0;i<=n-1;i++) {
		printf("%d ", a[i]);
    }
    printf("\n");
    for (i=0;i<=n-2;i++) {
		for (j=i+1;j<=n-1;j++) {
			if (a[i] > a[j] ) {
				t=a[i]; a[i]=a[j]; a[j]=t;
            }
        }
        for (k=0;k<=n-1;k++) {
			printf("%d ", a[k]);
        }
        printf("\n");
    }
    for (i=0;i<=n-1;i++) {
		printf("%d ", a[i]);
    }
	printf("\n");
    system("pause");
	return 0;
}
