#include<stdio.h>
void outputdata(int a[],int n);    //输出数组内容
void insert(int a[],int n,int num);  //num是要插入的数据,n表示当前有效数据个数
main()
{
	int n,i;
    int a[20],num;
    scanf("%d",&n);
    for(i=0;i<n;i++)   //插入n个数据
    {
     	scanf("%d",&num);
     	insert(a,i,num);
     	outputdata(a,i);
    }
}

void insert(int a[],int n,int num)
{
	int i;
 	if(n==0) 
	 a[0]=num;
  	else if(n>0)
 	{
  		for(i=n;i>=0;i--)
  		{
   			if(num<a[i])
   			{
    			a[i+1]=a[i];
    			a[i]=num;
   			}
  		}
 	}
}
 
void outputdata(int a[],int n)
{
 	int i;
	printf("Array is :");
 	for(i=0;i<=n;i++)
 	{
  		if(a[i]/10==0) 
  		printf(" ");
  		printf("   %d",a[i]);
  
	}
	 printf("\n");
	 printf("\n");
}