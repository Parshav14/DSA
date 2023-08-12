#include<iostream>
using namespace std;

int main()
{
	int r,c,a[20][20],sr,sc;
	cout<<"Enter rows"<<endl;
	cin>>r;
	cout<<"Enter columns"<<endl;
	cin>>c;
	cout<<"Enter the matrix elements"<<endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Your matrix is"<<endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<r; i++)
	{
		sr=0;
		for(int j=0; j<c; j++)
		{
			sr=sr+a[i][j];
		}
		cout<<"Sum of "<<i+1<<" row is "<<sr;
		cout<<endl;
	}
	for(int i=0; i<r; i++)
	{
		sc=0;
		for(int j=0; j<c; j++)
		{
			sc=sc+a[j][i];
		}
		cout<<endl;
		cout<<"Sum of "<<i+1<<" column is "<<sc;
	}
	
}
