#include<iostream>
using namespace std;
int main()
{
    int n,arr[100],count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
            count++;
    }
    if(count==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
    return 0;
}
