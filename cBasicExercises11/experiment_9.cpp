#include"stdio.h"
void putchar1(char a,char b);  //��С���������ĸ
void putchar2(char a,char b);  //�Ӵ�С�����ĸ
void space(int n);  //���n���ո�
int main()
{
   int n;
   int i;
   scanf("%d",&n);
   for(int i =0;i<n;i++)
   {
   	//�ո��������
   	space(n-i-1);   
   	// ��С���������ĸ
   	void putchar1('A','B');
   	//�Ӵ�С�����ĸ
   	void putchar2(char a,char b);
   	printf("\n");
   }
   
}

//���n���ո�
void space(int n){
	for(int i = 0;i<n;i++)
	{
		printf(" ");
	}
}

//��С���������ĸ
void putchar1(char a,char b)
{
	
} 