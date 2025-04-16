#include <iostream>
#include<iomanip>
using namespace std;

void display_array(int p)
{
    int array[p][p];
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<p; j++)
        {
            if(i==0 || i==p-1 || j==0 || j==p-1)
            {
                array[i][j]=1;
            }
            else
            {
                array[i][j]=min(i,min(j,min(p-1-i,p-1-j)))+1;
            }
        }
    }
    for(int k=0; k<p; k++)
    {
        for(int l=0; l<p; l++)
        {
            cout<<array[k][l]<<"   ";
            if(l<p-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
        cout<<endl;
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n][n];
        if(n==0)
            break;

        display_array(n);
    }

    return 0;
}
