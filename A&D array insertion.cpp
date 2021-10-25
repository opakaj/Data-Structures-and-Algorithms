#include<iostream>
using namespace std;
int main()
{
	int cs[] = {1,2,3,4,6,7};
	int item = 5, k = 4, n=6;
	int i=0, j=n;
	
	cout<<"original arrangement is:"<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<cs[i]<<endl;
		
	}
	n=n+1;
	
	while (j>=k)
	{
		cs[j+1] = cs[j];
		j=j-1; 
	}
	
	cs[k]=item;
	
	cout<<"after new arrangement!"<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<cs[i]<<endl;
		
	}
	
}
