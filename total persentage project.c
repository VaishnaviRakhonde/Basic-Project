#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float per;
	printf("\n enter s1 subject marks");
	scanf("%d",&s1);
	printf("\n enter s2 subject marks");
	scanf("%d",&s2);
	printf("\n enter s3 subject marks");
	scanf("%d",&s3);
	printf("\n enter s4 subject marks");
	scanf("%d",&s4);
	printf("\n enter s5 subject marks");
	scanf("%d",&s5);
	per=((s1+s2+s3+s4+s5)/500.0)*100;
	printf("\n total persentage is :%f",per);
	if(per>=35)
	{
		printf("\n pass");
	}
	else
	{
		printf("\n fail");
	}
	return 0;
}
