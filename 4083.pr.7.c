#include<stdio.h>

main()

{
	int n=10;
	int a=0,b=1;
	
	printf("%d,%d",a,b);
	 
	 int nextterm;
	 
	 for(int i=2;i<n;i++)
	 {
	 	nextterm=a + b;
	 	a=b;
	 	b=nextterm;
	 	printf("%d",nextterm);
	 }
}