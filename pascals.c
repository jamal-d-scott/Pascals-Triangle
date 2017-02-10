#include<stdio.h>
/**
 * Function: 	readInt
 * Returns: 	an int, read from standard input. 
 **/
int readInt()
{
	int c = 0;
	int i = 0;
  
	while( (c = getchar()) != EOF && c != '\n' )
	{
		if( c >= '0' && c <= '9')	
			i = i * 10 + (c - '0');	
	}

	return i;
}

long long factorial(long long n)
{
	if(n <= 1) 
		return 1;
	else
		return n*(factorial(n-1));		
}

int main()
{
	//n = rows, k = values in each row.
	int n, k, i, j,rows;
	long long value; 
	char input = ' ';

	printf("\nEnter a number of rows to compute (0-20): ");
	rows = readInt(input);

	if(rows < 0 || rows > 20)
	{
		printf("Invalid input.");
		return 0;
	}
	else
	{
		printf("\n");
	
		for(i = 0; i < rows; i++) //Loop for the rows.
		{
			n = i;
			for(j = 0; j <= i; j++) //Loop for the values in each row.
			{
 				k = j;
				value = factorial(n)/(factorial(n-k)*factorial(k)); 
				printf("%lld " , value);
				value = 0; //Reset variable for re-use.
			}
			printf("\n");
		}
	}
		printf("\n");
}

