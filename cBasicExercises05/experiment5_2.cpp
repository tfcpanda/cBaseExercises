#include "stdio.h"
#include <math.h>
int main()
{
	int x,y,distant;
	scanf("%d %d",&x,&y);
	distant = sqrt(x*x+y*y);
	if(distant>10)
		printf("out");
	if(distant==10) 
		printf("on");	
	if(distant<10)
		printf("in");
}


