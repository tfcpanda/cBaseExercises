/*******************************
* �ļ���: Exercise01_02
* ���ܣ����Ѿ�����������У�����һ������ʹ����Ȼ����ԭ��˳�򲻱�
* ����: TFC 
* ����: 2020-05-14
********************************/
#include"stdio.h"
void insert(int a[],int n,int k);  //k��Ҫ���������,n��ʾ��Ч���ݸ���
void inputdata(int a[],int n);  //��������
void outputdata(int a[],int n);    //�����������
main()
{
    
    int b[120]; 
    int m,k,r;
    scanf("%d%d",&m,&k); 
   for(int i = 0; i<m; i++)
	{
		scanf("%d", &b[i]);
	}
		int j, l; 
	for( j = 0; j<m; j++)
	{
		if(b[j]>=k)
		{
			break;
		}
	}
	
	for( l = m-1 ; l >= j; l--)
	{
		b[l+1] = b[l];
	}
	b[j] = k;
     
    for(int r = 0; r<m+1; r++)
	{
		printf("%d", b[r]);
	}
    return 0;
}



