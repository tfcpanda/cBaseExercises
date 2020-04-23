#include<stdio.h>
int main(void)
{
    int a,b,c;
    int sum = 0,cock=0,hen=0,chick=0,chicknum=0;
    for(a=0;a<=20;a++){
    	cock = a*5;
    	for(b=0;b<=33;b++){
    		hen = b*3;
	    	for(c=0;c<=100;c++){
	    		chick = c;
	    		sum =  cock+hen+chick;
	    		if(sum ==100&&a+b+c*3==100){
		    		printf("鸡翁%d个鸡母%d个鸡雏%d个\n",a,b,c*3);
		    	} 
	    	}
	    }	
    }
    
}