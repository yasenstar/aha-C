#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[101], b[101];
    int x, y;
    scanf("%s", a);
    scanf("%d", &x);
    scanf("%s", b);
    scanf("%d", &y);
    if (x > y) {
		printf("%s\n", a);
    }
    else {
		if (x < y) {
			printf("%s\n", b);
        }
        else {
			printf("%s and %s have same score.\n", a, b);
        }
    }
	system("pause");
	return 0;
}
