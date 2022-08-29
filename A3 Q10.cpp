#include<stdio.h>
void prime(int);
int main()
{
	int num;
	printf("Entre the number\n");
	scanf("%d",&num);
	prime(num);
}
void prime(int num)
{
	int r=2;
	while(num!=0)
	{
	  if(num%r==0)
	  {
	  	printf("%d ,",r);
	  	num=num/2;
	  }
	  else
	  r++;
	}
}
