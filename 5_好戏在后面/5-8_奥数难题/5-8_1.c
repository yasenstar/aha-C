#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
    for (i=1;i<=9;i++) {
		if ( (i*10+3)*6528 == (3*10+i)*8256 ) {printf("%d\n", i);}
    }
	system("pause");
	return 0;
}

// answer is 4
