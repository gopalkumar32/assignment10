#include<stdio.h>
int nat(int);
int main()
{
	int num,s;
	printf("Entre the number\n");
	scanf("%d",&num);
	s=nat(num);
	printf("Factorial of %d is %d",num,s);
}
int nat(int num)
{int fact=1;
	for(int i=1;i<=num;i++)
	 fact=fact*i;
	 return fact;
	
}
