#include<stdio.h>
int main()
{
	int num[128]={0},flag=0;
	char str[200];
	int i;
	gets(str);	

		for(i = 0; str[i]!='#'; i++)
		num[str[i]]++;
		for(i=0;i<128; i ++)
			if(num[i]!=0)
			{
				printf("%c:%d\n", i, num[i]);
				flag=1;
			}
		if(flag==0)
		printf("Ã»ÓĞ×Ö·û");	
	return 0;
}