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
    if(r == 0)
    	printf("删除位置错误");
    else
  	  	outputdata(b,m-1); 
    	return 0;
}

void inputdata(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
}
/*p表示要删除数据的下标，n表示数组中数据个数，a[n]是数组*/
int deldata(int a[],int n,int p)
{	
	if(p >= n)
	{
		return 0;
	}
	else
	{
		for(int j = p; j < n-1; j++)                          
		{                                           
			a[j]=a[j+1];                               
		}
		return 1;	
	}
		                    
}

/*输出数组内容*/
void outputdata(int a[],int n)
{
	for(int i = 0; i < n ; i++)                          
		printf("%d ", a[i]);   
} 