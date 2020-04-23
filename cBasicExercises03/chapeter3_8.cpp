#include <stdio.h>
double sqrt(double n);
int main( )
{
	double x1,y1,x2,y2,y,x;
    double z;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
 	x = x2-x1;
 	y = y2-y1;
 	z = sqrt(x*x+y*y); 
    printf("%.2f",z);
    return 0;
    
}
