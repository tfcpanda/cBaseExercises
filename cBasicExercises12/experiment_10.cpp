#include"stdio.h"
int issushu(int n);
int issushu(int n)
{

  int i;
    for(i=2; i<n ; i++)
    {
        if(n % i == 0) 
        {
            printf("%d ", i);
            issushu(n / i);
            return 1;
        }
    }
    printf("%d\n",n);


}


int main()
{
    int y;
    
    scanf("%d",&y);
    
    issushu(y);
}

