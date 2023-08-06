#include<stdio.h>


main()
{
	 int a,b,c,d,e;
	 
	 printf("enter value of a=");
	 scanf("%d",&a);
   	 printf("enter value of b=");
	 scanf("%d",&b);
	 printf("enter value of c=");
	 scanf("%d",&c);
	 printf("enter value of d=");
	 scanf("%d",&d);
	 printf("enter value of e=");
	 scanf("%d",&e);
	 
	 if(a<b)
	 {
	 	
	 	if(a<c)	
	 	{
	 		
			if(a<d)
			{
				if(a<e)
				{
					printf(" a is minmum",a);
				}
				else
				{
					printf (" e is minmum");
				}
			}
			else
			{
				if( d<e)
				{
				printf(" d is minmum",d);	
				} 
				else
				{
					printf(" e is minmum",e);	
				}
					
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("c is minmum",c);
				}
				else 
				{
					printf("e is minmum",e);	
				}
			}
			else
			{
				if(d<e)
				{
					printf("d is minmum ",d);
						
				}
				else
				{
					printf("e is minmum");
				}
			}
		}
	 }
	 else
	 {	
	 	if (b<c)	
	 	{
	 		
			if(b<d)
			{
				if(b<e)
				{
					printf(" b is minmum",a);
				}
				else
				{
					printf (" e is minmum");
				}
			}
			else
			{
				if( d<e)
				{
				printf(" d is minmum",d);	
				} 
				else
				{
					printf(" e is minmum",e);	
				}
					
			}
		}
		else
		{
		 	if (c<d)
		 	{
				if(c<e) 
				{
				printf("c is minmum",c);	
				}
				else{
				printf("e is minmum",e);
				}	
		 }
			 else
		 	{
			 	if(d<e)
			 	{
			 		printf("d is minmum",d);
				}
				else{
					printf(" e is minmum",e);
				}
		 	}	
		}
	
	 }
	 

}