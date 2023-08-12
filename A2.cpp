#include<iostream>
using namespace std;

int RemoveDuplicate(int a[],int size)
{
	int prev = 0;
	
	for(int i=0; i<size; i++)
	{
		if(a[i]!=a[prev])
		{
			a[++prev]=a[i];
		}
	}
	int count = prev + 1;
	return count;
}

int main()
{
	int a[] = {1,1,1,5,8,9,9,11,11,14,14,15,15,20,59,59,100,101,101};
	int size = sizeof(a)/sizeof(a[0]);
	
	int count = RemoveDuplicate(a, size);
	
	for(int i=0; i<count; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
