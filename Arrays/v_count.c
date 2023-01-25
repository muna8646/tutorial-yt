#include<stdio.h>
#include<conio.h> 
void main()
{
	int i, v =0;
	char word[30];
	printf("\nPlease enter a word: ");
	scanf("%s",word);
	i = 0;
	while(i <30 && word[i] != '\0')
	{
		switch (word[i])
		{
		case 'a' : case 'A':
		case 'e' : case 'E':
		case 'i' : case 'I':
		case 'o' : case 'O':
		case 'u' : case 'U': 
				 v++;
				break;
		}
		i++;
	}
	printf("\nThe number of vowels in %s is %d\n\n", word, v);
}
