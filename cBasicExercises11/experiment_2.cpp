#include <stdio.h>
//������������
int max3(int a, int b, int c);
int max(int a, int b);

main()
{
    int x, y, z, maxNum;
    
    scanf("%d %d %d", &x, &y, &z);
    
    maxNum = max3( x,  y,  z);   //����maxOf3�����x,y,z�е����ֵ

    printf("number %d is the biggest one.\n",maxNum);
}


int max3(int a, int b, int c)
{
	int result;

	result = max(a,b);  //���������Ի�����ã�����max�����������a,b֮������ֵ��

	result = max(result,c);   //�ٴε���max���������result,c�е����ֵ��
	
	return (result);
}

int max(int a, int b)
{
   	if(a>b){
	   	return a;
	   }else{
   		return b;
   	} 
}