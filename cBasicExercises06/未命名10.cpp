#include<stdio.h>
int main()
{
	int n,i,x,n1=0,n2=0,n0=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(x==0)n0++;
		else if(x>0)n1++;
		else n2++;
}
printf("����%d��\n��%d��\n����%d��\n",n1,n0,n2);
return 0;
}