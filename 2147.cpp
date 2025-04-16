#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cout<<showpoint<<fixed<<setprecision(2);
    while(n--)
    {
        double r=0;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='e')
                r++;
        }
        r=(r+8)/100;

        cout<<r<<endl;
    }
}
