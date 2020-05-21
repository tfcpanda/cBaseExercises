#include <stdio.h>
#define SIZE 1000

void input_arr(int arr[],int n);
void repeated_most(int arr[],int n);

int main()
{
    int num[SIZE];
    int n;
    scanf("%d",&n);
    input_arr(num,n);
    repeated_most(num,n);
    return 0;
}
//输入数组
void input_arr(int arr[],int n)
{
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
    }
}
//查找数组中出现次数最多的数
void repeated_most(int arr[],int n)
{
    int m=arr[0];
    int times=1;
    for(int i=0;i<n;i++)
    {
        int temp=1;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i]&&j!=i){
                temp++;
            }
        }
        if(temp>times)
        {
            times=temp;
            m=arr[i];
        }
    }
    printf("%d %d\n",m,times);
}
