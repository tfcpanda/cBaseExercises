#include <stdio.h>
int main(void)
{
	int i =1,n,sum = 0,s =0;
    scanf("%d\n",&n);
    while(i<=n){
		scanf("%d",&s);	 
		sum = sum + s;
		i=i+1;   	
    }
    printf("%d%",sum);
}

