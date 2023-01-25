#include<stdio.h>
void main( )
{
	float mark1, mark2, mark3, mark4, mark5, mark6, mark7, mark8, mark9, mark10;
	float sum, avg;

	printf("Enter element 1: ");
	scanf("%f",&mark1);
	printf("Enter element 2: ");
	scanf("%f",&mark2);
	printf("Enter element 3: ");
	scanf("%f",&mark3);
	printf("Enter element 4: ");
	scanf("%f",&mark4);
	printf("Enter element 5: ");
	scanf("%f",&mark5);
	printf("Enter element 6: ");
	scanf("%f",&mark6);
	printf("Enter element 7: ");
	scanf("%f",&mark7);
	printf("Enter element 8: ");
	scanf("%f",&mark8);
	printf("Enter element 9: ");
	scanf("%f",&mark9);
	printf("Enter element 10: ");
	scanf("%f",&mark10);
		
	sum = mark1 + mark2 + mark3 + mark4 + mark5 + mark6 + mark7 + mark8 + mark9 + mark10;	
	avg = sum / 10;
		
	printf("\n\nThe sum of elements is %.2f and the average is %.2f\n\n",sum, avg);
}
