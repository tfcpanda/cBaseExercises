#include <stdio.h>
#include<math.h>
/*
	本题要求实现一个函数，判断任一给定三位整数N是否满足条件：
	它是完全平方数，又至少有两位数字相同，如144、676等。
*/
int IsTheNumber ( int n);

int main()
{
    int n1, n2, i, cnt;	
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ )
    {
        if ( IsTheNumber(i)!=0)
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}

int IsTheNumber ( int n)
{
	 int N=n;
  int b;
  int p[10]={0};    //创建一个数组 
  int m=sqrt(N);	//开根号 
  if(m*m==n){		//判断是否为完全平方数 
    while(n){		//n大于1是循环进行下去 
      b=n%10;		//取最后一位数 
      p[b]++;		//0~9对应数字加1 
      n/=10;		//去除一位数 
    }
    for(int i=0;i<=9;i++){   //如果数组的某一位大于1说明有两位数字相同
      if(p[i]>1)
      return 1;
    }
  }
  return 0;

}