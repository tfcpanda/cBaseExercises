#include <stdio.h>
int main(void)
{
    int m, n, j, k=0;   /* j��ʾ��С��������k��ʾ���Լ�� */

    scanf("%d %d",&m,&n);
    j = m;
    while (j % n != 0 )  {	/* ����ʱ���öϵ� */
       j = j + m;
   		 k = (m * n) / j;     /* ����ʱ���öϵ� */
    }  
    printf("��С��������%d\n���Լ����%d\n", j, k);
    return 0;
}
