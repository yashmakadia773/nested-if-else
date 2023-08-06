#include<stdio.h>

main()


{
	
	int a,b,c;	
	
	printf ("enter value of a=");
	scanf("%d",&a);
	printf ("enter value of b=");
	scanf("%d",&b);
	printf ("enter value of c=");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("a is mimmun",a);
		}
		else
		{
			printf("c is minmum",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is minmum ",b);
		}
		else
		{
				printf("c is minmum",c);
		}
	}
	
}