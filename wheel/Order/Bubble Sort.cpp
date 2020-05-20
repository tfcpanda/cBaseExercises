#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10] = { 5,12,3,23,1,6,7,66,20,9 };
	int t = 0;
	for (int i = 0; i < 9; i++)   //注意这里只需要i<9,因为每次是两个数作比较，只需要循环9次
	{
		for (int j = 0; j < 10-1-i ; j++)  //每执行一次循环把最大的数放在最后，就会少一个数参与比较
		{
			//如果前面的变量大于后面的，交换位置
			if (a[j] > a[j + 1])
			{
				t = a[j];     //用中间变量交换数组两个位置的值
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	//按从小到大顺序输出数组
	for (int q = 0; q < 10; q++)
	{
		printf("%d\n", a[q]);
	}

	system("pause");
	return 0;

}
