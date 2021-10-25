#include <stdio.h>
#define MAX = 10

main()
{
	int A[] = {1,12,17,18,23,25,27,33,45,90};
	
	int x = 5;
	int index=0;
	int lb = 0;
	int ub = 9;
	
	printf("int array  [");
	for(int i=0;i < 10;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("]\n\n\n");
	
	while(lb <= ub)
	{
		int midpoint = (lb + ub)/2;
	
		if (x == A[midpoint]) //data is equal
		{
			index = midpoint;
			printf("Element found at %d",midpoint);
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
	printf("%d not found",x);
	
}
