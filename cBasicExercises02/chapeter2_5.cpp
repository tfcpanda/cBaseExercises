#include <stdio.h>
main()
{  
    int a,b,c,d;
    int x;
    scanf("%d",&x);     
    a = x / 1000;
    b = x/10/10%10;
    c = x / 10 % 10;
    d = x%10;
    printf("(%d,%d,%d,%d)",a,b,c,d);
    return 0;
}













