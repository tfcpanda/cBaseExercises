#include<stdio.h>
void star(int n);
void space(int n);
main()
{   int row, i;
    /*�û���������(�͸�����row)*/
    scanf("%d", &row);
    /*����row�����*/
    for(i=1; i<=row; i++)
      { //��ӡi-1���ո�
          space( i-1);
	//��ӡ(row-(i-1))������
	 star( row-(i-1) );
	 //�س�����
	 printf("\n");		
       }
      printf("\n");
}
void space(int n){
	for(int i = 0;i<n;i++)
	{
		printf(" ");
	}
	 return;
}

void star(int n){
	for(int i = 0;i<n;i++)
	{
		printf("*");	
	}
	return;	

}
