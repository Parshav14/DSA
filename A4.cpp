#include<iostream>
using namespace std;

// a)

//int main()
//{
//	int arr[6];
//	cout<<"Enter the 6 elements for an array"<<endl;
//	for(int i=0; i<6; i++)
//	{
//		cin>>arr[i];
//	}
//	cout<<"Your array is "<<endl;
//	for(int i=0; i<6; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout<<"\nYour reversed array is "<<endl;
//	for(int i=6-1; i>=0; --i)
//	{
//		cout<<arr[i]<<" ";
//	}
//	return 0;
//}

// b)

//int main()
//{
//	int r1,c1,r2,c2,a[20][20],b[20][20],d[20][20];
//	
//	cout<<"Enter the no. of rows for matrix A"<<endl;
//	cin>>r1;
//	cout<<"Enter the no. of columns for matrix A"<<endl;
//	cin>>c1;
//	cout<<"Enter the elements for Matrix A"<<endl;
//	for(int i=0; i<r1; i++)
//	{
//		for(int j=0; j<c1; j++)
//		{
//			cin>>a[i][j];
//		}
//	}
//	cout<<"Enter the no. of rows for matrix B"<<endl;
//	cin>>r2;
//	cout<<"Enter the no. of columns for matrix B"<<endl;
//	cin>>c2;
//	cout<<"Enter the elements for Matrix B"<<endl;
//	for(int i=0; i<r2; i++)
//	{
//		for(int j=0; j<c2; j++)
//		{
//			cin>>b[i][j];
//		}
//	}
//	cout<<"Your matrix A is"<<endl;
//	for(int i=0; i<r1; i++)
//	{
//		for(int j=0; j<c1; j++)
//		{
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<"Your matrix B is"<<endl;
//	for(int i=0; i<r2; i++)
//	{
//		for(int j=0; j<c2; j++)
//		{
//			cout<<b[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<"The product of matrix A and B is C"<<endl;
//	cout<<"Your matrix C is "<<endl;
//	for(int i=0; i<r1; i++)
//	{
//		for(int j=0; j<c2; j++)
//		{
//			d[i][j]=0;
//			for(int k=0; k<c1; k++)
//			{
//				d[i][j]=d[i][j]+(a[i][k]*b[k][j]);
//		    }
//		}
//	}
//	for(int i=0; i<r1; i++)
//	{
//		for(int j=0; j<c2; j++)
//		{
//			cout<<d[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

// c)

int main()
{
	int r,c,a[20][20],b[20][20];
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
	cout<<"The transpose of your matrix is"<<endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

