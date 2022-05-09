#include<stdio.h>
main()
{
	int mark;
	printf("enter mark:");
	scanf("%d",&mark);
	if(mark>=85 && mark<=100)
	{
		printf("Grade A");	//grade between 85 and 100
	}
	else if(mark>=70 && mark<=84)
	{
		printf("Grade B");	//grade between 70 and 84
	}
    else if(mark>=55 && mark<=69)
	{
		printf("Grade C");	//grade between 55 and 69
	}
    else if(mark>=40 && mark<=54)
	{
		printf("Grade D");	//grade between 40 and 54
	}
    else if(mark<=40)
	{
		printf("Grade F");	//below 40
    }
    else
        printf("invalid mark entered");
}