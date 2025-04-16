#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    string s;
    int w;
    while(x--)
    {
        cin>>s>>w;
        if(s== "Thor")
            cout<<'Y'<<endl;
        else
            cout<<'N'<<endl;
    }
    return 0;
}
