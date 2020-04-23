#include <stdio.h>
int isleap(int year);
int main()
{
    int y;
    scanf("%d",&y);
    if(isleap(y)==1)printf("yes\n");
    else printf("no\n");
    return 0;
}
int isleap(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0&&year%3200!=0)||year%172800==0)
        return 1;
    else
        return 0;
}

  