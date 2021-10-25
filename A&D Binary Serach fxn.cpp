#include<stdio.h>
# define MAX 10

int A[] = {1,12,17,18,23,25,27,33,45,90};

int find(int x)
{
	int index=0;
	int lb = 0;
	int ub = 9;
	
	while(lb <= ub)
	{
		int midpoint = (lb + ub)/2;
	
		if (x == A[midpoint]) //data is equal
		{
			index = midpoint;
			printf("%d found at index %d\n",x,midpoint);
			break;
		}
		else
			{
				if (x > A[midpoint]) // data is in upper half
				{
					lb = midpoint + 1;
				}
					else
						{
							ub = midpoint - 1; // data is in lower half
						}
			}
		
	}
	
	if (lb>ub)
	printf("%d not found\n",x);
	
}

main()
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





