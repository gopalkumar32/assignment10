#include<stdio.h>
void nat(int);
int main()
{
	int num;
	printf("Entre the number\n");
	scanf("%d",&num);
	nat(num);
}
void nat(int num)
{
	for(int i=1;i<=num;i++)
	printf("%d ,",i);
}
