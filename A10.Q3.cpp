#include<stdio.h>
int check(int);
int main()
{
	int num,s;
	printf("Entre the number\n");
	scanf("%d",&num);
	s=check(num);
	printf("%d",s);
}
int check(int num)
{
	if(num%2==0)
	return 1;
	else
	return 0;
}
