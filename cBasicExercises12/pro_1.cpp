#include<stdio.h>
#include<string.h>
//����һ����ת��Ӣ���ַ���Сд�ĺ�����
//������������ַ�,����ո񣬸ú�������ԭ�ַ���
char reverse(char ch);

main()
{   char ch;
    int i=0;
    //��ȡһ���ַ���
     ch=getchar();
     while(ch!='#') //��������ַ�
    {  //��ô�ͽ����ַ�����reverse����ȥ���������·Ż�ch��
        //���ת�����ch����������һ����ת���ַ�
	ch=reverse(ch);
	putchar(ch);
	ch=getchar();	
       	
   }
  
    
}
char reverse(char ch)
{ char result;
  result=ch;
  if(ch>='a'&&ch<='z')//�����Сд��ĸ����δ���
 	result-=32;
  if(ch>='A'&&ch<='Z')//����Ǵ�д��ĸ����δ���
  		result+=32;
  return result;
}