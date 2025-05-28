#include <stdio.h>
#include <stdlib.h>
int main()
{
	int k, i, count1, j, count2, a, b;
    for (k = 4; k <= 100; k = k +1)
    {
		for (a = 2; a <= k / 2; a++)
        {
			count1 = 0;
			for (i = 2; i<=a/2; i++)
            {
				if (a % i == 0) {
					count1++;
                    break;
                }
            }
            if (count1 == 0) {
				b = k - a;
                count2 = 0;
				for (j = 2; j<=b/2; j++)
				{
					if (b % j == 0) {
						count2++;
						break;
					}
				}
                if (count2==0) {
					printf("%d=%d+%d  ",k, a, b);
                    break;
                }
            }
        }
    }
	system("pause");
	return 0;
}
