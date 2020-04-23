#include"stdio.h"
/*
	以下是求等差数列和的程序，有错误，已知数列第一项的值a0，等差值k，和数列的项数n，求数列之和
*/
int sum(int a0,int k,int n);
main()
{
 int a0,k,n;
 int r;
 scanf("%d%d%d",&a0,&k,&n);
 r=sum(a0,k,n);
 printf("%d",r);
 
} 

int sum(int a0,int k,int n)
{
 int s=0;
 int i,t;
 t = a0;
 for(i=1;i<n;i++)
 {
   t=t+k;
   a0=a0+t; 
 }
 
 return a0;
}