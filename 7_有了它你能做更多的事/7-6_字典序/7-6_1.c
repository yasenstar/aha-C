#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[101], b[101];
    gets(a);
    gets(b);
    if (strcmp(a,b)<0) { puts(a); puts(b); }
    if (strcmp(a,b)==0) { puts(a); puts("һ����"); }
    if (strcmp(a,b)>0) { puts(b); puts(a); }
	system("pause");
	return 0;
}
