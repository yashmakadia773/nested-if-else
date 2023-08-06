#include<stdio.h>

main()


{
	
	int a,b,c,d;	
	
	printf ("enter value of a=");
	scanf("%d",&a);
	printf ("enter value of b=");
	scanf("%d",&b);
	printf ("enter value of c=");
	scanf("%d",&c);
	printf ("enter value of d=");
	scanf("%d",&d);	
	
	if (a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum",a);	
			}
			else
			{
				printf("d is maximum",d);
			}	
		}
		else
		{
			if(c>d)
			{
			printf("c is maximum",c);	
			}	
			else{
				printf("d is maximum",d);	
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum",b);	
			}
			else
			{
				printf("d is maximum",d);
			}	
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum",c);	
			}	
			else{
				printf("d is maximum",d);	
			}
		}
	}
}