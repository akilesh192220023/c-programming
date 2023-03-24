#include<stdio.h>
int main()
{
	int count,n,t1=0,t2=1,temp=0;
	printf("enter the value: ");
	scanf("%d",&n);
	printf("%d,%d",t1,t2);
	count=1;
	while(count<n)
	{
		temp=t1+t2;
		t1=t2;
		t2=temp;
		++count;
		printf(",%d",temp);
	}
	return 0;
}
