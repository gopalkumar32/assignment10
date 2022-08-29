#include<stdio.h>
int check(int);
int main()
{
	int num,l;
	printf("Entre the number\n");
	scanf("%d",&num);
	l=check(num);
	printf("%d",l);
}
int check(int num)
{

	if(num>=0&&num<=9)
	return 1;
	else
	return 0;
}
