#include <iostream>
using namespace std;

void create_display(int n)
{
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
           arr[i][j]=0;
            if(i==j)
                arr[i][j]=2;
            if((i+j)==n-1)
                arr[i][j]=3;
            if( i>n/3-1 && n-i>n/3 && j>n/3-1 && n-j>n/3 )
                arr[i][j]=1;
            if(i==j && (i+j)==n-1)
                arr[i][j]=4;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    int x;
    while(cin>>x)
    {
        create_display(x);
        cout<<endl;
    }
    return 0;
}
