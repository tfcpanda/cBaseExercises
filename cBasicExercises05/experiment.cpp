#include <stdio.h>
int main(void)
{
    int y,x;
    scanf("%d %d",&y,&x);
    if((y%4==0&&y%100!=0)||(y%400==0&&y%3200!=0)||y%172800==0){
    		if(x==2){
	    	printf("29");
	    }
	    else if(x==4||x==6||x==9||x==11){
        	printf("30");
        }
		else{
		 	printf("31");
    	} 
    }
    else
    {
    	 if(x==2){
        	printf("28");
        }
        else if(x==4||x==6||x==9||x==11){
        	printf("30");
        }
       	else{
		 	printf("31");
    	} 
    }
}

