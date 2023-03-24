 #include<stdio.h>
 int main()
 {
 	int n1,n2,n3;
 	printf("enter n1 value: ");
    scanf("%d",&n1);
    printf("enter n2 value: ");
    scanf("%d",&n2);
    printf("enter n3 value: ");
    scanf("%d",&n3);
    if(n1>n2&&n2>n3)
    printf("n1 is big number %f" , n1);
    else if (n2>n1 && n2>n3)
    printf("n2 is big nummber %f" , n2);
    else
    printf("n3 is big nummber %f" ,n3);
    return 0;
}
	
	 
 
