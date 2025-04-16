#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int x;

    x=a+b;

    if(x>24)
        x=x-24;
    else if(x<0)
        x=x+24;

    int y;

    y=x+c;

    if(y>24)
        y=y-24;
    else if(y<0)
        y=y+24;

    cout<<y<<endl;
    return 0;
}
