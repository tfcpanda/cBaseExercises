#include<stdio.h> 
#include<math.h>
   int Triangle(int a, int b, int c);
int main() 
{ 
    int x,y,z; 
    scanf("%d%d%d",&x,&y,&z); 
    if(Triangle(x,y,z))      //函数调用
        printf("Y\n"); 
    else
        printf("N\n"); 
} 

//函数定义

int Triangle(int a, int b, int c)
{
	if(a>0&&b>0&&c>0){
		if(a+b>c&&a+c>b&&c+b>a){
			return 1;
		}else{
		return 0;	
		}
	}else{
		return 0;
	}
}
