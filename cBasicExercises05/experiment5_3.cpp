#include "stdio.h"
int main()
{
	int x;
	char y;
	scanf("%c",&y);
	x = y;
	if(x>=97&&x<=122){
		x = x-32;
		}
	else if(x>=65&&x<=106){	
		x = x+32;
	}	
	y= x;
	printf("%c",y);
}


