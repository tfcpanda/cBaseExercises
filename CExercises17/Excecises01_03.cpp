#include<stdio.h>
void swap(int a,int b); //���Q�ɂ�׃��
void outputdata(int a[],int n); 
void inputdata(int a[],int n);
int main()
{
	int a[99], n, m, j, k, i, t, min;

	scanf("%d %d", &n, &m);
	
    inputdata( a, n);
	
	for(j = 0; j < m; j++)
	{  
		k = j;
		min = j;
		/*�ҳ���Сֵ���±�*/
    	for(i = j+1; i < n; i++)
    	{
		 	if(a[i]<a[min])
	 		{
 				min = i;
 			} 
		} 
    	
         	t = a[min];
         	a[min] = a[k];
         	a[k] = t;
    		outputdata( a, n);
			printf("\n"); 
	}
	 //outputdata( a, n); 
}

//���Q�ɂ�׃��
void swap(int a,int b) 
{
    int temp = a;
    a = b;
    b = temp;
    printf("ѭ������ĵ�����  %d %d", a, b);
}

//������� 
void outputdata(int a[],int n)
{
	for(int i = 0; i < n ; i++)
	{
		printf("%d ", a[i]); 
		
	}                          
		  
} 

//��ȡ���� 
void inputdata(int a[],int n)
{
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);	
	}
	
}