#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,a,b;
    string s1,s2,s3,s4;
    cin>>n;
    while(n--)
    {
        int sum=0;
        cin>>s1>>s2>>s3>>s4;
        cin>>a>>b;
        sum=a+b;
        if(s2[0]=='P')
        {
            if(sum%2==0)
            {
                cout<<s1<<endl;
            }
            else
            {
                cout<<s3<<endl;
            }
        }
        else if(s2[0]=='I')
        {
            if(sum%2==0)
            {
                cout<<s3<<endl;
            }
            else
            {
                cout<<s1<<endl;
            }
        }
    }
    return 0;
}
