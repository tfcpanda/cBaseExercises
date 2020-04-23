#include"stdio.h"
void putchar1(char a,char b);  //从小到达输出字母
void putchar2(char a,char b);  //从大到小输出字母
void space(int n);  //输出n个空格
int main()
{
   int n;
   int i;
   scanf("%d",&n);
   for(int i =0;i<n;i++)
   {
   	//空格的数量；
   	space(n-i-1);   
   	// 从小到达输出字母
   	void putchar1('A','B');
   	//从大到小输出字母
   	void putchar2(char a,char b);
   	printf("\n");
   }
   
}

//输出n个空格
void space(int n){
	for(int i = 0;i<n;i++)
	{
		printf(" ");
	}
}

//从小到达输出字母
void putchar1(char a,char b)
{
	
} 