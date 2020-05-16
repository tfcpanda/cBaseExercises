#include"stdio.h"
void output(int a[],int n);
main()
{
	int n,i,j,x,pos;
	/*用来控制位置*/ 
	int c=0; 
	int a[20];
	/**/ 
	scanf("%d",&n);
	/*插入数据*/ 
	for(i=0;i<n;i++) 
	{
		scanf("%d",&x);
		//查找插入的位置pos，并且向后移动数答据
		pos=0;
		/*每次都加插入一个数据*/ 
		for(j=c-1;j>=0;j--)
		{
			if(x>a[j])
			{
				pos=j+1;
				break;
			}
			else
			{
				a[j+1]=a[j];
			}
		}
a[pos]=x; //在pos位置插入数据
output(a,c);
c++; //个数加1
}


printf("\n");

return 0;
}

/*输出数据*/
void output(int a[],int n)
{
	printf("Array is : "); 
	int i;
	for(i=0;i<n;i++)
	{
		printf("   %d",a[i]);
	}
}
