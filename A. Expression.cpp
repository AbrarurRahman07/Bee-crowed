#include<iostream>
#include <algorithm>///***
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int p,q,r,s,t,u,v,w;
    p=a+b*c;
    q=a*(b+c);
    r=a*b*c;
    s=(a+b)*c;
    t=a+b+c;
    u=(a*c)+b;
    v=(a+c)*b;
   ///int max_value=max(max(max(max(p,q),max(r,s)),max(t,u)),v);
   int max_value=max({p,q,r,s,t,u,v});
    cout<<max_value<<endl;
}
