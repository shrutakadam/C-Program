#include<stdio.h>
//Without return type with parameter
void add(int a,int b); //function prototype
main()
{
	int a,b;
	printf("\n enter a and b:");
	scaanf("%d%d",&a,&b);
	add(a,b)                           //Actual Argument
	 
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("\n add=%d",c);
}
