#include<stdio.h>
#include<conio.h> 
void main( )
{
	int i;
	float mark[10], sum = 0, avg;

	for (i = 0; i < 10; i++)
	{
		printf("Enter element %d: ", i + 1);
		scanf("%f",&mark[i]);
		sum = sum + mark[i];
	}
	
	avg = sum / 10;
	
	printf("\n\nThe elements are: \n");
	for (i = 0; i < 10; i++)
		printf("%.2f ",mark[i]);
		
	printf("\n\nThe sum of elements is %.2f and the average is %.2f\n\n",sum, avg);
}
