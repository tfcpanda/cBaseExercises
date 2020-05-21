#include<stdio.h>
int main()
{
    int a[100]={0};
    int m,n,i,j,x=-1;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d",&m);
        a[m]=a[m]+1;
    }
    
    for(j=n;j>=1;j--)
    {
        if(a[j]>=2)
        {
            x=1;
            printf("%d ",j);
        }
    }
    
        if(x==-1)
        printf("-1");
        return 0;
}
