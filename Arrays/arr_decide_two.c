#include<stdio.h>
#include<stdlib.h>
void main( ) 
{
	int i, total_number;
	float  mark[100], highest, lowest, sum = 0,average;
	
begin:
	printf("How many students do you want to work with? ");
	scanf("%d",&total_number);
	
	if(total_number < 0 || total_number > 100)
	{
		system("cls");
		printf("\a\a\aThe number of students have to be between 1 and 100\n\n");
		goto begin;
	}
	
	for (i = 0; i < total_number; i++)
	{
		printf("Enter the mark for student %d:> ",i + 1);
		scanf("%f",&mark[i]);
	}

	highest = lowest = mark[0];

	for (i = 0; i < total_number; i++)
	{
		sum = sum + mark[i];
		if (mark[i] > highest)
			highest = mark[i];
		else if(mark[i] < lowest)
			lowest = mark[i];
	}
	average = sum / total_number;
	
	printf("\n\nStudent Marks");
	printf("\n-----------------------------");
	
	for (i = 0; i < total_number; i++)
		printf("\nStudent %d:   %.2f",i + 1, mark[i]);

	printf("\n\nThe highest mark is %.2f",highest);
	printf("\nThe lowest is %.2f",lowest);
	printf("\nThe total is %5.2f and average is %.2f\n\n",sum,average);
}
