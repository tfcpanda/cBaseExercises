#include <stdio.h>
int main(void)
{
    int m, n, j, k=0;   /* j表示最小公倍数，k表示最大公约数 */

    scanf("%d %d",&m,&n);
    j = m;
    while (j % n != 0 )  {	/* 调试时设置断点 */
       j = j + m;
   		 k = (m * n) / j;     /* 调试时设置断点 */
    }  
    printf("最小公倍数是%d\n最大公约数是%d\n", j, k);
    return 0;
}
