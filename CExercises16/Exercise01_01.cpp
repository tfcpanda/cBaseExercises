#include<stdio.h>
int main()
{
	int num[128]={0},flag=0;
	char str[300];
	int i;
	gets(str);
	/*����#��ʱ�򣬽�������*/
	for(i = 0; str[i]!='#'; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			num[str[i]-'a']++;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			num[str[i]+32-'a']++;
	}
	/**/ 
	for(i=0;i<128; i ++)
	{
		if(num[i]!=0)
		{
			printf("%c:%d\n", 'A'+i, num[i]);
			flag=1;
		}
	}	
	if(flag==0)
		printf("û���ַ�");	
	return 0;
}