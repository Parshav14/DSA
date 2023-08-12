#include<iostream>
#include<stdlib.h>
using namespace std;

void display(int b[],int n);
void insertion(int a,int b,int c ,int m[]);
void deletion(int j,int f,int k[]);
void linear_search(int a,int b,int o[]);

int main()
{
	int num,pos,s,arr[100],sz;
    char ch;
    
    do
    {
        cout<<"--MENU--"<<endl;
        cout<<"1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT"<<endl;
        cout<<"Enter your Choice"<<endl;
        cin>>s;
        switch (s)
        {
        case 1:
            cout<<"Enter the size of your array"<<endl;
            cin>>sz;
            for(int i=0; i<sz; i++)
            {
			cout<<"Enter the "<<i<<" value"<<endl;
            cin>>arr[i];
            }
            break;
        case 2:
            display(arr,sz);
            break; 
		case 3:
		    insertion(num,pos,sz,arr);
			break; 
		case 4:
		    deletion(pos,sz,arr);
			break;  
		case 5:
			linear_search(num,sz,arr);
			break;
		case 6:
			break;
        
        default:
            cout<<"Wrong Choice entered"<<endl;
            break;
        }
        cout<<"Do you want to continue"<<endl;
        cout<<"Enter y or n"<<endl;
        cin>>ch;
    } while (ch == 'y');

    return 0;
}

void display(int b[],int n)
{
    cout<<"Your array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

void insertion(int a,int b,int c ,int m[])
{
	cout<<"Enter the number you want to insert"<<endl;
	cin>>a;
	cout<<"Enter the position at which you want to insert an elememt"<<endl;
	cin>>b;
	c = c + 1;
	for(int i=c;i>=b;i--)
	m[i]=m[i-1];
	m[b-1]=a;
}

void deletion(int j,int f,int k[])
{
	cout<<"Enter the position at which you want to delete an elememt"<<endl;
	cin>>j;
	j--;
	for(int i=j;i<=f-1;i++)
	k[i]=k[i+1];
}

void linear_search(int a,int b,int o[])
{
	cout<<"Enter the number you want to search"<<endl;
	cin>>a;
	for(int i=0;i<b;i++)
	{
		if(o[i]==a)
		{
	    cout<<"Your element was present at index: "<<i<<endl;
	    }
	    break;
    } 
}
