#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, d, e;
    for (a=0;a<=9;a++) {
		for (b=0;b<=9;b++) {
			for (c=0;c<=9;c++) {
				for (d=0;d<=9;d++) {
					for (e=0;e<=9;e++) {
						if ( a!=b && a!=c && a!=d && a!=e
                                  && b!=c && b!=d && b!=e
                                          && c!=d && c!=e
                                                  && d!=e ) {
													if ( (a*1000+b*100+c*10+d)*e == (d*1000+c*100+b*10+a) ) {
													printf("%d%d%d%d\n",a,b,c,d);
													printf("x  %d\n", e);
													printf("____\n");
													printf("%d%d%d%d\n",d,c,b,a);
													}
                                                  }
                    }
                }
            }
        }
    }
	system("pause");
	return 0;
}
