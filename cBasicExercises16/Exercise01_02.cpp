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
    inputdata(b,m); 
    insert(b,m,k);  
    outputdata(b,m+1); 
    return 0;
}


/*��ȡ����*/
void inputdata(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
}

/*�ҵ���ͬ�����֣�����*/
void insert(int a[],int n,int k)
{
		int j, l; 
	for( j = 0; j<n; j++)
	{
		if(a[j]>=k)
		{
			break;
		}
	}
	
	for( l = n-1 ; l >= j; l--)
	{
		a[l+1] = a[l];
	}
	a[j] = k;
} 

/*ѭ����ӡ���*/ 

void outputdata(int a[],int n)
{
	for(int m = 0; m<n; m++)
	{
		printf("%d ", a[m]);
	}
}