#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cin.ignore();
    string s;
    while(x--)
    {
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(i==0 || s[i-1]==' ')
            {
                cout <<s[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
