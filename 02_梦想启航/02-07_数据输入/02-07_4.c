#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("%d+%d=%d\n", a, b, c);
    c = a - b;
    printf("%d-%d=%d\n", a, b, c);
    c = a * b;
    printf("%d*%d=%d\n", a, b, c);
    c = a / b;
    printf("%d/%d=%d\n", a, b, c);
	system("pause");
	return 0;
}
