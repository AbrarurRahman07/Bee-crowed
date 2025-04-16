#include <iostream>
using namespace std;

int main()
{
    int a,b,r,q;
    cin>>a>>b;
    if(b==0)
        cin>>b;
    q=a/b;
    r=a%b;
    cout<<q<<" "<<r<<endl;
    if(r<0)
    {

        r=r+abs(b);
        q=(a+r)/b;
    }

    cout<<q<<" "<<r<<endl;
    return 0;
}
