 #include<stdio.h>
#include<stdbool.h>

#define MAX 7

int A[MAX] = {1,3,2,4,6,5,8};

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

void SelectionSort()
{
	int Min, i,j;
	
	//loop through all numbers
	for(i=0;i<MAX -1;i++)
	{
		//set current location as minimum
		Min = i;
		
		//check the element to be minimum
		for(j=i+1;j<MAX;j++)
		{
			if(A[j] < A[Min])
			Min = j;	
		}
	}
	
	if(Min != i)
	{
		printf("Items Swapped: [%d, %d]",A[i], A[Min]);
		
		int temp = A[Min];
		A[Min] = A[i];
		A[i] = temp;
	}
	
	printf("Iteration #%d",(i+1));
	Display();
	
}

main()
{
	printf("Input Array: ");
	Display;
	
	SelectionSort();
	printf("Output Array: ");
	Display();
}


