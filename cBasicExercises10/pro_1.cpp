#include"stdio.h"
int sum(int n);   //����ԭ������
main()
{
   int n,s;
   scanf("%d",&n);
   s=sum(n);   //��������
    printf("%d\n",s);
}
     //�������壨���

int sum(int n) 
{
   /* �ֲ��������� */
   int sum= 0;
 
	for(int i = 1;i<=n;i++){
		sum+=i;
	}
 
   return sum; 
}