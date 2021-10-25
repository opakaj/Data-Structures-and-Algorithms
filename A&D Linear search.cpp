#include<stdio.h>
#define MAX 12
main()
{
	int x [MAX] = {1,2,3,4,5,3,7,8,3,0,22,35};
	int y = 32;
	int i = 0;
	int index;
	
	for(i=0;i<MAX;i++)
	{
		if(x[i] == y)
		{
			index = i;
			printf("%d found at index number %d\n",y,index);
			break;	
				
		}
	}
		printf(" %d not found",y);
		
}
