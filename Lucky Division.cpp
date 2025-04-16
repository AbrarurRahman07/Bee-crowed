#include<iostream>
#include<cmath>
using namespace std;
bool is_lucky(int  x)
{
    int p=0;
    while(x>0)
    {
        p=x%10;
        if(p!=4 && p!=7)
        {
            return 0;
        }
        x/=10;
    }
    return 1;
}

int main()
{
    int x;
    cin>>x;
    if(x%4==0 || x%7==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(is_lucky(x))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i = 4; i <= x; i++)
    {
        if(is_lucky(i) && x % i == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
