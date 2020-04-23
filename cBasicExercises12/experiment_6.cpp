#include"stdio.h"

int fb(int a1,int a2,int n);  //斐波那契求和函数原型申明

int main()
{
    int a,b,n,s;
    scanf("%d%d%d",&a,&b,&n);
    s=fb(a,b,n);
    printf("%d\n",s);
}


int fb(int a1,int a2,int n)
{
	
	int total=0;
	
	
	int first = 0;
	int second = a1;
	int third = a2-1;   //

	while(n>0)
	{
		n = n - 1;
		second = first;
		first = third;
		third = first + second;
		total = total + third;//计算前n项和
	}
	return total;
}


#include"stdio.h"
int fb(int a1,int a2,int n);  //斐波那契求和函数原型申明
int main()
{
    int a,b,n,s;
    scanf("%d%d%d",&a,&b,&n);
    s=fb(a,b,n);
    printf("%d\n",s);
}
int fb(int a1,int a2,int n) 
{
	int i,c,s=a1+a2;
	for(i=1;i<=n-2;i++)
	{
		c=a1+a2;
		s=s+c;
		a1=a2;
		a2=c;	
	}
	return s;
}