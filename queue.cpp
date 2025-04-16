#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,count=0;
    char arr[50];
    cin>>x>>y;
    for(int i=0; i<x; i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<x; j++)
    {
        if(arr[j]=='B' && arr[j+1]=='G')
        {
            swap(arr[j],arr[j+1]);
            if(arr[j+2]!='B')
            count++;
        }
        if(count==y)
            break;
    }
    for(int i=0; i<x; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}
