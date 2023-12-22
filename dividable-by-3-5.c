#include<stdio.h>

void max(int n)
{
	if(n%3 == 0 && n%5 == 0)
	{
		printf("number is dividable by 3 & 5");
	}
	
	else
	{
		printf("number is not dividable by 3 & 5");
	}
}
main()
{

 int a;
 
 printf("Enter number = ");
 scanf("%d",&a);
 
 max(a);

}
