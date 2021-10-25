#include<stdio.h>
#define MAX 10


int A[] = {1,12,17,18,23,25,27,33,45,90};

int find(int data)
{
	int L = 0;
	int H = MAX -1;
	int index = 0;
	
	while (L <= H)
	{
		int mid = L + (H-L) / A[H] * (data - A[L]); 
		
		if(A[mid] == data)
		{
			index = mid;
			printf("%d found at index %d\n",data,mid);
			break;
		}
		else
		{
			if(data > A[mid])
			{
				L = mid + 1;
			}
			else
			{
				H = mid - 1;
			}
		}
	}
	
	if (L > H)
	printf("%d not found\n",data);
}

int main()
{
	printf("int array  [\t");
	for(int i=0;i < 10;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("]\n\n");
	
	
	find(12);
	find(45);
	find(2);
	find(42);
	find(17);
	
}
