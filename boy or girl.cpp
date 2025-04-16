#include<iostream>
using namespace std;
int main()
{
    string s,p;
    cin>>s;
    int len=s.size();

    for(int i=0; i<len; i++)
    {

        bool unic=true;

        for(int j=0; j<i; j++)
        {
            if(s[i]==s[j])
                unic=false;
        }
        if(unic)
        {
            p+=s[i];
        }

    }

    if(p.length()%2==0)

        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!" <<endl;
    return 0;
}

