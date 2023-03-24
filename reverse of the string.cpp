#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	printf("enter a string\n:");
	gets(a);
	strrev(a);
	printf("reverse of given string is:%s\n",a);
	return 0;
}
