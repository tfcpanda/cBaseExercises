#include"stdio.h"
void output(int a[],int n);
main()
{
	int n,i,j,x,pos;
	/*��������λ��*/ 
	int c=0; 
	int a[20];
	/**/ 
	scanf("%d",&n);
	/*��������*/ 
	for(i=0;i<n;i++) 
	{
		scanf("%d",&x);
		//���Ҳ����λ��pos����������ƶ������
		pos=0;
		/*ÿ�ζ��Ӳ���һ������*/ 
		for(j=c-1;j>=0;j--)
		{
			if(x>a[j])
			{
				pos=j+1;
				break;
			}
			else
			{
				a[j+1]=a[j];
			}
		}
a[pos]=x; //��posλ�ò�������
output(a,c);
c++; //������1
}


printf("\n");

return 0;
}

/*�������*/
void output(int a[],int n)
{
	printf("Array is : "); 
	int i;
	for(i=0;i<n;i++)
	{
		printf("   %d",a[i]);
	}
}
