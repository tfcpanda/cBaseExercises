#include <stdio.h>
void putchar1(char a,char b); //��С�����������ĸ
void putchar2(char a,char b); //�Ӵ�С�����ĸ
void space(int n); //���n���ո���
int main()
{
int n;
int i;
scanf("%d",&n);


for(i=0;i<n;i++)
 {
  space(n-i-1);
  
  putchar1('A','A'+i);
  putchar2('A'+i-1,'A');
 } 
 return 0;
 
}
 void putchar1(char a,char b)
 {
 for(char c=a;c<=b;c++)
 putchar(c);
 }
 void putchar2(char a,char b)
 {for(char c=a;c>=b;c--)
 putchar(c);
 putchar('\n');  
 }
 void space(int n)
 {
 for(;n--;)
 putchar(' ');
 }