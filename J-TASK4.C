#include<stdio.h>
#include<stdio.h>
void main()
{
	int j,e,s,i,c,a,v,n;
	clrscr();

	printf("Enter the value of basic salary:");
	scanf("%d",&e);
	printf("Enter the value of DA:");
	scanf("%d",&s);
	printf("Enter the value of HRA:");
	scanf("%d",&i);
	printf("Enter the value of TA:");
	scanf("%d",&c);

	a=(s*e)/100;
	v=(i*e)/100;
	n=(c*e)/100;
	j=e+a+v+n;

	printf("value of gross salary of employee=%d",j);
	getch();
}