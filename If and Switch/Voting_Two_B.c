#include<stdio.h> 
void main( )
{
	int age;

	printf ("Enter your age: ");
	scanf("%d",&age);

	if (age >= 18)
	{
		printf ("\nYou can vote.");
		printf("\nYou vote is your choise.");
	}
	else
	{
		printf("\nYou are too young to vote.");
		printf("\nDon't worry next time you would vote.");
	}

	printf("\n\n");
}
