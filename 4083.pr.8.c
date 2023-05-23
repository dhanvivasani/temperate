#include<stdio.h>

main()

{
	int n,i=0;
	printf("enter value:-");
	scanf("%d",&n);
	
	while(n>0)
	{
		 n=n/10;
		 i++;
	}
	
	 printf("count == %d",i);
}
