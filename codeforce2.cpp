#include<iostream>
using namespace std;
int main()
{
    int n,time=0;
    cin>>n;
    while(n--)
    {
      int s[3];
        for(int i=0; i<3; i++)
        {
            cin>>s[i];
        }
           if(s[0]+s[1]+s[2]>=2)
             {
                 time++;
             }

    }
     cout<<time<<endl;
}
