/*
	Program to print Fibonacci Series of Number
	Author: jAs™
 @grapie
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	void fibo(int n);
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Fibonacci Series\n0\n1\n");
	fibo(n);
	getch();
}
void fibo(int n)
{
	int a=0,b=1,c,i;
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
