#include<stdio.h>
#include<math.h>
int power(int x,int n);
main()
{
   int r,i,n;
   scanf("%d",&n);
   for(i=1;i<6;i++)
   {
      r=power(n,i);
      printf("%d\n",r);
   }
}
int power(int x,int n)
{
	return pow(n,x);	

} 

 
