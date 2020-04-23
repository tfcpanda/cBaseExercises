#include<stdio.h>
void pntstar(int n);
int main(void){
	int n;
	
	for(int i =0;i<6;i++)
	{
		scanf("%d",&n);
		pntstar(n);
		printf("\n");
	}
		
	}



void pntstar(int n)
{
	for(int i = 0;i<n;i++)
	{
		printf("*");
	}
}