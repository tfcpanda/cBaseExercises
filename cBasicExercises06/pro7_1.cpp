#include <stdio.h>
int main(void)
{
    int x;
   	scanf("%d",&x);
    int y[ x ];
    while(x){
    	y[x] = scanf("%d",&y[x]);
    	x--;
    } 
    printf("%d",y[1]);
  
}