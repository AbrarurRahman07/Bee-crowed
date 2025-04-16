#include <iostream>
using namespace std;
int main()
{
    int t,n;
    while(1)
    {
        cin>>t;
        if(t==0)
            break;
        for(int i=0; i<t; i++)
        {
            cin>>n;
            if(n%2!=0)
                cout<<(n-1)*2+1<<endl;
            else
                cout<<(n-2)*2+2<<endl;
        }
    }

    return 0;
}
