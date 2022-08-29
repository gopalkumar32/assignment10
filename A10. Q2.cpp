#include<stdio.h>
float si(int,int,int);
int main()
{
	int p,r,t;
	float sim;
	printf("Entre the value of p,r,t\n");
	scanf("%d%d%d",&p,&r,&t);
	sim=(p,r,t);
}
float si(int p,int r,int t)
{
	return (p*r*t)/100.0;
}

