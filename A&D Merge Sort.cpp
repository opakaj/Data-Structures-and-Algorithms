#include<stdio.h>
#define MAX 10

int A[10] = {3,1,2,4,6,5,8,7,9,0};
int B[10];

void merging(int low, int mid, int high)
{
	int L1, L2, i;
	
	for(L1 = low,L2 = mid+1,i = low; L1<=mid+1 && L2 <= high; i++ )
	{
		if(A[L1] <= A[L2])
			B[i] = A[L1++];
		else
			B[i] = A[L2++];
	}
	
	while(L1<=mid)
		B[i++] = A[L1++];
		
	while(L2<=high)
		B[i++] = A[L2++];
		
	for(i=low;i<MAX;i++)
		A[i] = B[i];
}

void Sort(int low, int high)
{
	int mid;
	
	if(low<high)
	{
		mid = (low + high) / 2;
		Sort(low,mid);
		Sort(mid+1,high);
		merging(low, mid, high);
	}
	else
	{
		return;
	}
}

int main()
{
	int i;
	
	printf("List before sorting:\n");
	
	for(i=0;i<=MAX;i++);
		printf("%d", A[i]);
	
	Sort(0,MAX);
	
	printf("List after sorting:\n");
	
	for(i=0;i<=MAX;i++);
		printf("%d", A[i]);
	
}
















































