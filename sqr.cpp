#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,l,r;
    cin>>x;
    if (x == 0 || x == 1)
    {
        cout<<x<<endl;
        return 0;
    }

    if (x > 1)
    {
        l = 1;
        r = x;
    }
    else
    {
        l = x;
        r = 1;
    }
    while(r - l > 0.00000001)
    {
        double m=l+(r-l)/2.0;
        if(m*m==x)
        {
            cout<<m<<endl;
            return 0;
        }
        else if(m*m<x)
        {
            l=m;
        }
        else
        {
            r=m;
        }
    }
    cout<<l + (r - l) / 2.0<<endl;
}
