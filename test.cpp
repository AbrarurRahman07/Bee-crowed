#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;///1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    cin>>n;
    vector<int>a,b,c;
    int x=1,y=2,z=3;
    while(x<=n)
    {
        a.push_back(x);
        x+=3;
    }
    while(y<=n)
    {
        b.push_back(y);
        y+=3;
    }
    while(z<=n)
    {
        c.push_back(z);
        z+=3;
    }
    for(auto p:a)
    {
        if(p==n)
            cout<<"I hate it"<<endl;
        return 0;
    }
    for(auto q:b)
    {
        if(q==n)
            cout<<"I hate that I love it"<<endl;
        return 0;
    }
    for(auto r:c)
    {
        if(r==n)
            cout<<"I hate that I love that I hate it"<<endl;
        return 0;
    }
}

