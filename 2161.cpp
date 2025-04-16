#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double n,y;
    cout<<showpoint<<fixed<<setprecision(10);
    cin>>n;
    if(n==0)
    {
        cout<<"3.0000000000"<<endl;
    }
    else
    {
        double r=0;
        for(int i=0; i<=n; i++)
        {
            r=6+1/r;
        }
        cout<<3+(1/r)<<endl;
    }
    return 0;
}
