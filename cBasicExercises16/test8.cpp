#include"stdio.h"
void inputdata(int a[],int n);  //输入数据
int deldata(int a[],int n,int p);  //p表示要删除数据的下标，n表示数据个数
                                        //返回值1表示删除成功，0表示删除失败
void outputdata(int a[],int n);    //输出数组内容
main()
{   int b[20]; 
    int m,k,r;
    scanf("%d%d",&m,&k); 
    inputdata(b,m);
	r=deldata(b,m,k);
	m=r;	
	
    outputdata(b,m); 
    return 0;
}

void inputdata(int a[],int n)
{
	int i;
	for( i= 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
}
int deldata(int a[],int n,int p)
{
	int i,j;
	for(i=0;i<n;i++)                            
	{                                           
		if(a[i]==p)                                
       	{	                                           
			for(j=i;j<n-1;j++)                          
			{                                           
				a[j]=a[j+1];                               
			}
		n--;
		i--;
		}
	} 
	return n;		                  
}
void outputdata(int a[],int n)
{
	int i;
	for(i = 0; i<n;i++)
	{
		printf("%d ", a[i]);
	}
}