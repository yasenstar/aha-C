#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,k;
    for (i=1;i<=9;i++) {
		for (j=0;j<=9;j++) {
			for (k=0;k<=9;k++) {
				printf("%d ", i*100+j*10+k);
            }
        }
    }
    printf("\n");
	system("pause");
	return 0;
}
