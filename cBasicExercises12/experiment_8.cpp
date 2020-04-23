#include<stdio.h>
int is_sushu(int n);
int main()
{
    int i,m,n,sum=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(is_sushu(i))
           sum+=i;   
    }
    printf("%d\n",sum);
    return 0;
}
int is_sushu(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        break;            
    }
    if(i==n)
    return 1;
    else
    return 0;
}