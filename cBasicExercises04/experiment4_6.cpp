#include <stdio.h>
int main()
{
  int hour,min,leftmin;        //��������
  printf("�����������:");
  scanf("%d",&min);        //��������
   	hour = min/60;
    leftmin = min-hour*60;
    printf("%dСʱ%d����",hour,leftmin);

}


