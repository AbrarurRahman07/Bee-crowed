#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len;
    len=s.length();
    if(len<=80)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
            return 0;
}
