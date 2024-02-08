#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[5][11], t[11];
    int i, j;
    printf("please input five words, per line:\n");
    for (i=0;i<=4;i++) { gets(a[i]); }
    for (i=0;i<=3;i++) {
		for (j=i+1;j<=4;j++) {
			if (strcmp(a[i], a[j])>0) {
				strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }
    printf("===here is the output from dict order===\n");
    for (i=0;i<=4;i++) { puts(a[i]); }
	system("pause");
	return 0;
}
