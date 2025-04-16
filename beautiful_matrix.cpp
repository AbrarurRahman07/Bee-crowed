#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int x[5][5];
    int r,c;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>x[i][j];
        }
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(x[i][j]==1)
            {
                r=i+1;
                c=j+1;
            }
        }
    }
    int result=abs(3-r)+abs(3-c);
    cout<<result<<endl;
    return 0;
}
