#include <iostream>

using namespace std;

int main()
{
 int x,y,z;
 while(cin>>x)
 {
     int arr[x];
     for(int i=0;i<x;i++)
     {
         cin>>arr[i];
     }
    int mex=0;
     for(int i=0;i<x;i++)
     {
         if(arr[i]>mex)
         mex=arr[i];
     }
     if(mex>=20)
      cout<<3;
      else if(mex>=10 && mex<20)
      cout<<2;
      else
      cout<<1;
      cout<<endl;
 }


    return 0;
}
