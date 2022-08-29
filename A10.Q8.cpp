#include<stdio.h>
int n(int);
int n_r(int,int);
int main()
{
	int m,w,s;
	printf("Entre the value of m,n\n");
	scanf("%d%d",&m,&w);
	s=n(m)/n_r(m,w);
	printf("Combintion of n item at r selection is %d",s);
}
int n(int m)
{
	 int fact=1;
	for(int i=1;i<=m;i++)
	fact=fact*i;
	return fact;
}
int n_r(int m,int w)
{
	int fact=1;
	for(int i=1;i<=m-w;i++)
	fact=fact*i;
	return fact;
}
