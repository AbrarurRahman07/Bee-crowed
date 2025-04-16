#include <iostream>
#include<iomanip>
using namespace std;

void formet_and_display_array(int n)
{
  int arr[15][15];
  int l,k=1,mex=0;
    for(int i=0; i<n; i++)
    {

        if(i==0)
          k=1;
          else k=l;

        for(int j=0; j<n; j++)
        {
           if(j==1)
            l=k;
           arr[i][j]=k;
           if(k>mex)
            mex=k;
            k*=2;
        }
    }
    int cunt=0;
    while(mex!=0)
    {
      mex=mex/10;
      cunt++;
    }

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<setw(cunt)<<arr[i][j];
        if(j!=n-1)
          cout<<" ";
      }
      cout<<endl;
    }
}
int main()
{
    int x;
    while(cin>>x && x!=0)
    {
        formet_and_display_array(x);
        cout<<endl;
    }
    return 0;
}
