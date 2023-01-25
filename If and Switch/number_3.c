#include<stdio.h>
void main()
{
	int money,tax;
	char male,female;
	
	printf("choise the charator you need: ");
	scanf("%c %c",&male,&female);
	
	printf("Enter the money been pay: ");
	scanf("%d" ,&money);
	
	
	if (female  < 15000){
	tax =	15000 * 0.12;
	printf("\nThe amount pay is %.2d",female);
	}
	else if (female  >= 15000){
	tax =	15000 * 0.14;
	printf("\nThe amount pay is %.2d",female);
	}
	else if (male  < 14000){
	tax =	15000 * 0.13;
	printf("\nThe amount pay is %.2d",male);
	}
	else if (male >= 14000){
	tax =	15000 * 0.15;
	printf("\nThe amount pay is %.2d",male);
	}
	
}
