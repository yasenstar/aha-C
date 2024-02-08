#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // required by Sleep()
int main()
{
	int i;
    
    // 定义小球初始坐标(x,y)，迷宫出口坐标(p,q)
    int x, y, p, q;
    
    // 初始化字符迷宫
    char a[50][50] = {
		"######",
        "#O #  ",
        "#  # #",
        "##   #",
        "######"
    };
    
    // 给出小球初始坐标和迷宫出口坐标
    x=1; y=1; p=1; q=5;
    
    // 在屏幕上输出初始化的迷宫
    for (i=0;i<=5;i++) { puts(a[i]); }
    
	// system("pause");
    Sleep(5000);
	return 0;
}
