#include <iostream>
using namespace std;

int main()
{
    int x,t;
    cin>>x;
    while(x--)
    {
        cin>>t;
        if(t<2015)
        {
            cout<<2015-t<<" D.C"<<endl;
        }
        else if(t>=2015)
        {
            cout<<t-2015+1<<" A.C"<<endl;
        }
    }
    return 0;
}
