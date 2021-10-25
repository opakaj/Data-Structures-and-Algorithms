#include<stdio.h>
#include<stdbool.h>

#define MAX 7

int A[MAX] = {4,6,3,2,1,9,7};

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

void InsertionSort()
{
	int valuetoinsert;
	int holeposition;
	int i;
	
	for(i=1;i<MAX;i++)
	{
		//select a value to be inserted
		valuetoinsert = A[i];
		
		//holeposition number is to be inserted
		holeposition = i;
		
		//check if previous number is bigger than number to be inseeted
		while(holeposition > 0 && A[holeposition - 1] > valuetoinsert)
		{
			A[holeposition] = A[holeposition - 1];
			holeposition --;
			printf("Item moved: %d\n",A[holeposition]);
		}
		
		if(holeposition != 1)
		{
			printf("Item inserted: %d, at position %d\n\n",valuetoinsert,holeposition);
			
			//insert the value in holeposion
			A[holeposition] = valuetoinsert;
		}
		
		printf("Itereation #%d\n",i);
		Display();
	}
}

main()
{
	printf("Input Array: ");
	Display;
	
	InsertionSort();
	printf("Output Array: ");
	Display();
}





















