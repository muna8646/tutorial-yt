#include<stdio.h>
void main() 
{
	int i, pass, fail;
	int mark[10] = {55, 76, 90, 100, 34, 23, 84, 95, 100, 99};

	pass = fail = 0;

	for (i = 0; i < 10; i++)
	{
		if (mark[i] >=50)
			pass++;
		else
			fail++;
	}
	printf("\nThe number of candidates who passed = %d", pass);
	printf("\nThe number of candidates who failed = %d\n\n", fail);
}
