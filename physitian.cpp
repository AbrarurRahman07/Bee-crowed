#include<iostream>
using namespace std;
int main()
{
    int n,sx=0,sy=0,sz=0;
    cin>>n;
    int x[100],y[100],z[100];
    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        sx+=x[i];
        sy+=y[i];
        sz+=z[i];
    }
    if(sx==0 && sy==0 && sz==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
