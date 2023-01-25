#include<stdio.h>
void main( )
{
	float mark[10];
	float sum, avg;

	printf("Enter element 1: ");
	scanf("%f",&mark[0]);
	printf("Enter element 2: ");
	scanf("%f",&mark[1]);
	printf("Enter element 3: ");
	scanf("%f",&mark[2]);
	printf("Enter element 4: ");
	scanf("%f",&mark[3]);
	printf("Enter element 5: ");
	scanf("%f",&mark[4]);
	printf("Enter element 6: ");
	scanf("%f",&mark[5]);
	printf("Enter element 7: ");
	scanf("%f",&mark[6]);
	printf("Enter element 8: ");
	scanf("%f",&mark[7]);
	printf("Enter element 9: ");
	scanf("%f",&mark[8]);
	printf("Enter element 10: ");
	scanf("%f",&mark[9]);
		
	sum = mark[0] + mark[1] + mark[2] + mark[3] + mark[4] + mark[5] + mark[6] + mark[7] + mark[8] + mark[9];	
	avg = sum / 10;
		
	printf("\n\nThe sum of elements is %.2f and the average is %.2f\n\n",sum, avg);
}
