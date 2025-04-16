#include<iostream>
using namespace std;
int main()
{
    int a,b;
    long long int r=0;
    cin>>a>>b;
    for(int i=1; i<=b; i++)
    {
        r=r*10+i;
        if(i>=a)
        {
            if(r%3==0)
                cout<<r<<" ";
        }
    }
}
