#include<stdio.h>
//����һ���ܴ�ӡn���ַ��ĺ���printchar
void printchar(int n,char ch);

main()
{   int row, i;
    /*�û���������(�͸�����row)*/
     scanf("%d", &row);
     //����row�����
      for(i=1; i<=row; i++)
	{   //����printchar���������?���ո�
            printchar(row-i,' ');   
	    //����printchar���������?���Ǻ�
	    printchar(2*(i-1)+1,'*');  
	   //�س�����
	    printf("\n");		
	 }
        printf("\n");
}
void printchar(int n,char ch)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%c",ch);
	}
}