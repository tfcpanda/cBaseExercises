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
    inputdata(b,m); 
    insert(b,m,k);  
    outputdata(b,m+1); 
    return 0;
}


/*读取数字*/
void inputdata(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
}

/*找到相同的数字，代换*/
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

/*循环打印输出*/ 

void outputdata(int a[],int n)
{
	for(int m = 0; m<n; m++)
	{
		printf("%d ", a[m]);
	}
}