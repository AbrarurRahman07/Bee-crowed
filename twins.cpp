#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x,z;
  cin>>x;
  vector<int>arr(x);
  for(int i=0;i<x;i++)
  {
   cin>>arr[i];
  }
  sort(arr.rbegin(),arr.rend());

  int count=0,sum1=0,sum2=0;
  for(int i=0;i<x;i++)
  {
    sum1+=arr[i];
    count++;
    for(int j=i+1;j<x;j++)
    {
      sum2+=arr[j];
    }
    if(sum1>sum2)
      break;
    sum2=0;
  }
  cout<<count<<endl;
}
