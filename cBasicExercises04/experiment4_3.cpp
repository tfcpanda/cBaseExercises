#include"stdio.h"
main()
{
    int x;
    scanf("%d",&x);
    if(x<0)
        x = -x;
    printf("%d",x);
}

