#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int p,n;
    cin>>p>>n;
    int x[100];

    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(abs(x[i+1]-x[i])>p)
        {
            cout<<"GAME OVER"<<endl;
            return 0;
        }
    }
    cout<<"YOU WIN"<<endl;
    return 0;
}
