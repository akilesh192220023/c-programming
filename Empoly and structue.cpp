#include<stdio.h>
struct employee
{
	char name[1000];
	int age;
	int basic;
	int emp_id;
	int hra,da,it,gross;
	int netpay;
};
int main()
{
	struct employee e;
	printf("enter name of the employee: ");
	scanf("%s",&e.name);
	printf("enter age: ");
	scanf("%d",&e.age);
	printf("enter employee id:");
	scanf("%d",&e.emp_id);
	printf("enter basic: ");
	scanf("%d",&e.basic);
	e.hra=e.basic*0.02;
	e.da=e.basic*0.01;
	e.gross=e.hra+e.basic+e.da;
	e.it=e.basic*0.05;
	e.netpay=e.gross-e.it;	
	printf("\ndisplay the details\n: ");
	printf("name %s\n",e.name);
	printf("age %d\n",e.age);
	printf("basic %d\n",e.basic);
	printf("emp_id %d\n",e.emp_id);
	printf("hra %d\n",e.hra);
	printf("da %d\n",e.da);
	printf("it %d\n",e.it);
	printf("gross %d\n",e.gross);
	printf("netpay %d\n",e.netpay);
	return 0;
}
