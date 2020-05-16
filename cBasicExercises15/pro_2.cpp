#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int blow=0,low=0,nor=0,goo=0,best=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i] ==1)
		{
			blow++;
		}
		else if(a[i] ==2)
		{
			low++;
		}
		else if(a[i] ==3)
		{
			nor++;
		}
		else if(a[i] ==4)
		{
			goo++;
		}
		else{
			best++;
		}
	}
	
	printf("1:%d\n",blow);
	printf("2:%d\n",low);
	printf("3:%d\n",nor);
	printf("4:%d\n",goo);
	printf("5:%d\n",best);
	
}