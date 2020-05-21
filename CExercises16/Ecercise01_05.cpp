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
      	scanf("%d", &num);
      	insert(a,n,num);
      	outputdata(a,i);
    }
    return 0;
	
}


void insert(int a[],int n,int num)
{
		int j, l; 
	for( j = 0; j<n; j++)
	{
		if(a[j]>=num)
		{
			break;
		}
	}
	
	for( l = n-1 ; l >= j; l--)
	{
		a[l+1] = a[l];
	}
	a[j] = num;
}  

void outputdata(int a[],int n)
{
	printf("Array is : ");
	for(int m = 0; m<=n; m++)
	{
		printf("   %d", a[m]);
	}	
     printf("\n");	
     printf("\n");
      
    
}