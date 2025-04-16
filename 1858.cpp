#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int minimum=a[0],position=0;
    for(int i=0; i<n; i++)
    {
       if(a[i]<minimum)
       {
         minimum=a[i];
         position=i;
       }
    }
    cout<<position+1<<endl;
    return 0;
}
