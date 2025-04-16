#include <iostream>
#include <iomanip>
using namespace std;
double cal(int x,int y)
{
    double z;
    if(x==1001)
        z=1.5;
    else if(x==1002)
        z=2.5;
    else if(x==1003)
        z=3.5;
    else if(x==1004)
        z=4.5;
    else if(x==1005)
        z=5.5;

    return z*y ;
}
int main()
{
    int n;
    cin>>n;
    double sum=0;
    int a,b;
    while(n--)
    {
        cin>>a>>b;
        sum=sum+cal(a,b);
    }
    //cout<<showpoint<<fixed<<setprecision(2)<<sum<<endl;
    printf("%.2lf",sum);
    return 0;
}

