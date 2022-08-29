#include<stdio.h>
float area(int);
int main()
{
	int r;
	float s;
	printf("Entre the value of r\n");
	scanf("%d",&r);
	s=area(r);
	printf("Area of circle is %f",s);
}
float area(int r)
{
	return 3.14*r*r;
}
