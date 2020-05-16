#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	gets(str);
	printf("str = %s\n", str);
	gets(str);
	printf("str = %s\n", str);
	return 0;	
}