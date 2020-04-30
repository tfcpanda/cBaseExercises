#include <stdio.h>

double mypow( double x, int n );

int main()
{
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

double mypow( double x, int n )
{
	double a = x;
	double b= 1;
	for(int i = 1;i<=n;i++)
	{
		b = b*a;
	}
	return ;
}