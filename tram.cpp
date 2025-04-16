#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int m=0;
    int temp=0;
    while(n--)
    {
        cin>>a>>b;
        temp=temp-a+b;
        if(temp>m)
            m=temp;
    }
    cout<<m<<endl;
}
