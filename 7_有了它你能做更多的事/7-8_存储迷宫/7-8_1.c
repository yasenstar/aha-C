#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
    char a[7][12] = {
		"###########",
        "#O   #  ###",
        "# ## ##   #",
        "#  #    # #",
        "# #### ## #",
        "#       #  ",
        "###########"
    };
    for (i=0;i<=6;i++) { puts(a[i]); }
	system("pause");
	return 0;
}
