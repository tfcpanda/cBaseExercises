#include"stdio.h"
int issushu(int n);
main()
{
  // @@1
	int x,i;
	scanf("%d",&x);
	for(i=2;i<=x/2;i++)
	if(issushu(i)&&issushu(x-i))
	{
		printf("%d %d\n",i,x-i);
	}
  // @@1
}
int issushu(int n)
{
 
    int i;
	for(i=2;i*i<=n;i++)
	if(n%i==0)return 0;
	return n>1;  
 
}