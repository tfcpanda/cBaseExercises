#include"stdio.h"
void inputdata(int a[],int n);  //��������
int deldata(int a[],int n,int p);  //p��ʾҪɾ�������ݻ��±꣬n��ʾ���ݸ���
void outputdata(int a[],int n);    //�����������
main()
{   int b[20]; 
    int m,k,r;
    scanf("%d%d",&m,&k); 
    inputdata(b,m);
    
	 deldata(b,m,k);
    
    outputdata(b,m); 
    return 0;
}

/*¼������*/
void inputdata(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}

/*p��ʾҪɾ�����ݣ�n��ʾ���������ݸ�����a[n]������*/
int deldata(int a[],int n,int p)
{	int k;
	 for( k = 0; k<n;k++)                            
	{                                           
		if(a[k]==p)                                
		      break;                                    
	}   
	
		for(int j = k; j < n-1; j++)                          
		{                                           
			a[j]=a[j+1];                               
		}
	                   
}

/*�����������*/
void outputdata(int a[],int n)
{
	for(int i = 0; i < n ; i++)                          
		printf("%d ", a[i]);   
} 