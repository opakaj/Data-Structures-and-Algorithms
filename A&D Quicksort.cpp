#include<stdio.h>
#define MAX 7

int A[10] = {4,6,3,2,1,9,7};

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

void swap (int num1, int num2)
{
	int temp = A[num1];
	A[num1] = A[num2];
	A[num2] = temp;
}

int partition(int left, int right, int pivot)
{
	int leftpointer = left-1;
	int rightpointer = right;
	
	while(true)
	{
		while(A[++leftpointer] < pivot)
		{
			//do nothing
		}
		
		while(rightpointer > 0 && A[--rightpointer] > pivot)
		{
			//do nothing
		}
		
		if(leftpointer >= rightpointer)
		{
			break;
		}
		else
		{
			printf("Item swapped: %d,%d\n",A[leftpointer,A[rightpointer]]);
			swap(leftpointer,rightpointer);
		}
	}
	
	printf("Pivot swapped: %d,%d\n",A[leftpointer,A[rightpointer]]);
	swap(leftpointer,right);
	printf("Updated array: ");
	Display;
	return leftpointer;
}

void Quicksort(int left, int right)
{
	if(right - left <= 0)
	{
		return;
	}
	else
	{
		int pivot = A[right];
		int partitionpoint = partition(left, right, pivot);
		Quicksort(left,partitionpoint - 1);
		Quicksort(partitionpoint+1, right);
	}
}

main()
{
	printf("Input Array: ");
	Display();
	printf("\n");
	
	Quicksort(0,MAX-1);
	printf("\nOutput Array: ");
	Display();
}













