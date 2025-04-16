#include<iostream>
using namespace std;
int main()
{
  string s,p;
  cin>>s>>p;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]==p[i])
      cout<<0;
    else
      cout<<1;
  }
  cout<<endl;
}
