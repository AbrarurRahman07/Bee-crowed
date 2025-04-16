#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t,u="hello";
    cin >> s;
    for(auto x:s)
    {
        t+=tolower(x);
    }
    int x=0;
    for(int i=0; i<t.size(); i++)
    {
        if(t[i]==u[x])
        {
            x++;
        }
    }
    if(x==u.size())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
