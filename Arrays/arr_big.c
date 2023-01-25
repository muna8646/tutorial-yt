#include<stdio.h>
void main( ) 
{
	int i;
	float  num[10], big, small, sum = 0,average;
	
	for (i = 0; i < 10; i++)
	{
		printf("\nEnter number %d:> ",i + 1);
		scanf("%f",&num[i]);
	}

	big = small = num[0];

	for (i = 0; i < 10; i++)
	{
		sum = sum + num[i];
		if (num[i] > big)
			big = num[i];
		else if(num[i] < small)
			small = num[i];
	}
	average = sum/10;
	
	printf("\nThe biggest number is %.2f",big);
	printf("\nThe smallest number is %.2f",small);
	printf("\nThe sum is %5.2f and average is %.2f\n\n",sum,average);
}
