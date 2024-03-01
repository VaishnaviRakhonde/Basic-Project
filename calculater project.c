#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,option;
	printf("enter the first number. a");
	scanf("%d",&a);
	printf("enter the second number.b");
	scanf("%d",&b);
	printf("\n press 1 for addition....");
	printf("\n press 2 for subtraction.....");
	printf("\n press 3 for multiplication....");
	printf("\n press 4 for division.....");
	printf("\n enter your choice");
	scanf("%d",&option);
	switch (option)
	{
		case 1:
			printf("sum=%d",a+b);
			break;
		case 2:
			printf("subtraction=%d",a-b);
			break;
		case 3:
			printf("multiplication=%d",a*b);
			break;
		case 4:
			printf("division=%d",a/b);
			break;
			default:
				printf("enter a valid value");
	}
	return 0;
}
