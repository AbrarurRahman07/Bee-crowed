#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x,y;
  cin>>x;
  vector<int>v;
  int p,n;
  int count=0;
  while(x--)
  {
    cin>>y;
    v.push_back(y);
  }
  for(int i=0;i<v.size();i++)
  {
    if(v[i]!=v[i+1])
      count++;
  }
  cout<<count<<endl;
}
