#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[5][11];
    int i;
    printf("Please input 5 words (<10 chars) per line:\n");
    for (i=0;i<=4;i++) { gets(a[i]); }
    printf("===here are what you've input:===\n");
    for (i=0;i<=4;i++) { puts(a[i]); }
	system("pause");
	return 0;
}
