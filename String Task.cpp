#include<iostream>
#include<cstring>
#include <ctype.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='y')
        {
            for(int j=i; j<s.size(); j++)
            {
                s[j]=s[j+1];
            }
            s.pop_back();
            i--;
        }
    }
    for(int i=0; i<s.size(); i++)
    {
        s.insert(i,".");
        i++;
    }
    cout<<s<<endl;
}
