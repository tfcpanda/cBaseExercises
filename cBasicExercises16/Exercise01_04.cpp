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
    if(r == 0)
    	printf("ɾ��λ�ô���");
    else
  	  	outputdata(b,m-1); 
    	return 0;
}

void inputdata(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
}
/*p��ʾҪɾ�����ݵ��±꣬n��ʾ���������ݸ�����a[n]������*/
int deldata(int a[],int n,int p)
{	
	if(p >= n)
	{
		return 0;
	}
	else
	{
		for(int j = p; j < n-1; j++)                          
		{                                           
			a[j]=a[j+1];                               
		}
		return 1;	
	}
		                    
}

/*�����������*/
void outputdata(int a[],int n)
{
	for(int i = 0; i < n ; i++)                          
		printf("%d ", a[i]);   
} 