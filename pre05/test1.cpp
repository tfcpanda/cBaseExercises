#include<stdio.h>
int main()
{
	int a,b,i,j,s,k,m;
	scanf("%d %d",&a,&b);//����������
	for(i=a;i<=b;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s+=j;
			}
		}
		if(s==i)//�ж��Ƿ�������
		{
			printf("%d = 1",i);//Ϊ�˼����  �Ȱѡ����� = 1����ӡ���� ��Ϊ�϶�����1 �ٺ�
			for(k=2;k<j;k++)//�ظ�����
			{
				if(i%k==0)
				{
					printf(" + %d",k);//ע��Ӻ�ǰ���涼�� �ո�
				}
			}
			printf("\n");//����  �������������������ϵ�������һ�����
			m++;//�ж���������  ����û��ʱ���None
		}
		
	}
	if(m==0)
		{
			printf("None\n");
		}
	return 0;
}
