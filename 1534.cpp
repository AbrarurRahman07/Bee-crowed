#include <iostream>

using namespace std;
    ///0123
///0///1332
///1///3123
///2///3213
///3///2331
void formet_array(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j == n-1)
            {
                cout<<2;
            }
            else if(i==j)
            {
                cout<<1;
            }
            else
            {
                cout<<3;
            }
        }
        cout<<endl;
    }
}

int main()
{
    int x;
    while(cin>>x)
    {
        formet_array(x);
    }

    return 0;
}
