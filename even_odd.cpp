#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,count=0;
    cin>>n>>k;
    vector<int>v;
    long long int i=1;
    while(i<=n)
    {
      v.push_back(i);
       count++;
       if(count==k)
        break;
      i=i+2;
    }
    long long int j=2;
    while(j<=n)
    {
      v.push_back(j);
       count++;
       if(count==k)
        break;
      j=j+2;
    }
    cout<<v[k-1]<<endl;
}
