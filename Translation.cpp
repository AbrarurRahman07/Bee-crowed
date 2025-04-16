#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2;
    bool b=true;
    cin>>s1>>s2;
    int x=s1.size(),y=s2.size();
    if(x!=y)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=0; i<x; i++)
    {
        if(s1[x-i-1]==s2[i])
            continue;
        else
        {
            b=false;
            break;
        }
    }
    if(b==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
