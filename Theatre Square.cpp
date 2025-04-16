#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    double l=ceil((double)n/a);
    double w=ceil((double)m/a);
    long long int x=l*w;
    cout<<x<<endl;
}
