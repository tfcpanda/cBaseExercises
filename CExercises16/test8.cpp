#include"stdio.h"
void inputdata(int a[],int n);  //��������
int deldata(int a[],int n,int p);  //p��ʾҪɾ�����ݵ��±꣬n��ʾ���ݸ���
                                        //����ֵ1��ʾɾ���ɹ���0��ʾɾ��ʧ��
void outputdata(int a[],int n);    //�����������
main()
{   int b[20]; 
    int m,k,r;
    scanf("%d%d",&m,&k); 
    inputdata(b,m);
	r=deldata(b,m,k);
	m=r;	
	
    outputdata(b,m); 
    return 0;
}

void inputdata(int a[],int n)
{
	int i;
	for( i= 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
}
int deldata(int a[],int n,int p)
{
	int i,j;
	for(i=0;i<n;i++)                            
	{                                           
		if(a[i]==p)                                
       	{	                                           
			for(j=i;j<n-1;j++)                          
			{                                           
				a[j]=a[j+1];                               
			}
		n--;
		i--;
		}
	} 
	return n;		                  
}
void outputdata(int a[],int n)
{
	int i;
	for(i = 0; i<n;i++)
	{
		printf("%d ", a[i]);
	}
}