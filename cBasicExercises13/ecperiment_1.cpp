#include <stdio.h>
#include<math.h>
/*
	����Ҫ��ʵ��һ���������ж���һ������λ����N�Ƿ�����������
	������ȫƽ����������������λ������ͬ����144��676�ȡ�
*/
int IsTheNumber ( int n);

int main()
{
    int n1, n2, i, cnt;	
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ )
    {
        if ( IsTheNumber(i)!=0)
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}

int IsTheNumber ( int n)
{
	 int N=n;
  int b;
  int p[10]={0};    //����һ������ 
  int m=sqrt(N);	//������ 
  if(m*m==n){		//�ж��Ƿ�Ϊ��ȫƽ���� 
    while(n){		//n����1��ѭ��������ȥ 
      b=n%10;		//ȡ���һλ�� 
      p[b]++;		//0~9��Ӧ���ּ�1 
      n/=10;		//ȥ��һλ�� 
    }
    for(int i=0;i<=9;i++){   //��������ĳһλ����1˵������λ������ͬ
      if(p[i]>1)
      return 1;
    }
  }
  return 0;

}