#include"stdio.h"
int digit(int n,int k);
main()
{
    int n,k;
    printf("Enter n,k:");
    scanf("%d,%d",&n,&k);
    printf("The result is:%d\n",digit(n,k));
}

int digit(int n,int k)
{
	int remainder;
		for(int i =0;i<k;i++){
			remainder = n%10;
			n = n/10;
		}
	return remainder;
} 