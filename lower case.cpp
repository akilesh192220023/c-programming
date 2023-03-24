#include<stdio.h>
#include<string.h>
int main()
{
	 char a[1000];
	 printf("enter a string");
	 gets(a);
	 strlwr(a);
	 printf("lower case of the string is:%n",a);
	 return 0;
}
