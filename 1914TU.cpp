#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b>c && b+c>a && c+a>b)||(a+b>d && b+d>a && d+a>b)||(d+b>c && b+c>d && c+d>b)||(a+d>c && d+c>a && c+a>d))
        cout<<'S'<<endl;
    else
        cout<<'N'<<endl;

    return 0;
}
