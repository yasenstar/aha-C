#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5][5]={{1,2,3},{4,5},{0,0,6}},i,j;
    for (i=0;i<=4;i++) {
		for (j=0;j<=4;j++) {
			printf("%d ",a[i][j]);
        }
        printf("\n");
    }
	system("pause");
	return 0;
}
