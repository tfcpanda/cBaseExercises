/*******************************
* 文件名: Exercise01_02
* 功能：在已经有序的数组中，插入一个数据使他仍然保持原来顺序不变
* 作者: TFC 
* 日期: 2020-05-14
********************************/
#include"stdio.h"
void insert(int a[],int n,int k);  //k是要插入的数据,n表示有效数据个数
void inputdata(int a[],int n);  //输入数据
void outputdata(int a[],int n);    //输出数组内容
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



