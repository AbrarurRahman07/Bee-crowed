#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int uppercaseCount = 0, lowercaseCount = 0;

    for (char ch : s)
    {
        if (isupper(ch))
        {
            uppercaseCount++;
        }
        else if (islower(ch))
        {
            lowercaseCount++;
        }
    }

    if(lowercaseCount>=uppercaseCount)
    {
        for(char& it : s)
        {
            it=tolower(it);
        }
        cout<<s<<endl;
    }
    else if(lowercaseCount<uppercaseCount)
    {
        for(char& it : s)
        {
            it=toupper(it);
        }
        cout<<s<<endl;
    }

}

