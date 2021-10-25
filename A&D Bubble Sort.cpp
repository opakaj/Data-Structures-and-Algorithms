#include<stdio.h>
#include<stdbool.h>

#define MAX 10

int A[MAX] = {11,14,13,16,19,17,18,10,12,15};

void Display()
{
	int i;
	printf("[");
	for(i=0;i<MAX;i++)
	{
		printf("%d ",A[i]);
	}
	printf("]\n");
}

void bubbleSort()
{
	int temp;
	int i, j;
	
	bool swapped = false;
	
	//loop through all numbers
	for(i=0; i<MAX-1;i++)
	{
		swapped = false;
		
		//loop through numbers falling ahead
		for(j=0;j<MAX-1-i;j++)
		{
			printf("Items compared: [%d, %d]",A[j],A[j+1]);
			
			if(A[j] > A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				
				swapped = true;
				printf(" => swapped [%d, %d]\n",A[j],A[j+1]);
			}
			
			else
			{
				printf(" => not swapped\n");
			}
		}
		
		if(!swapped)
		{
			break;
		}
		printf("Iteration #%d\n",(i+1));
		Display();
	}
}

main()
{
	printf("Input Array: ");
	Display();
	printf("\n");
	
	bubbleSort();
	printf("\nOutput Array: ");
	Display();
}

