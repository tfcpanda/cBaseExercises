#include<stdio.h>
int main()
{   int n,i;             //��������,����iΪѭ������
	float score,sum=0.0;     //����score��ȡ����ѧ���ĳɼ������ۼӵ�sum��
	printf("How many student in your class?:");
	scanf("%d",&n);
	i = 0;                  //��ʼ��ѭ������
	while(i<n)            //ѭ����������
	{ 
	   printf("Please input score of student[%d]:",i);
	   scanf("%f",&score);
	   sum = sum+score;    //�������ۼӵ�sum��
	   i++;	              //����ѭ��������ֵ
	}
	printf("The average score is %.2f",sum/n); 
    return 0; 
}