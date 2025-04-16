#include<iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]==s[i+1] && s[i+1]==s[i+2] && s[i+2]==s[i+3] && s[i+3]==s[i+4] && s[i+4]==s[i+5] && s[i+5]==s[i+6])
    {
      cout<<"YES"<<endl;
      return 0;
    }
  }
   cout<<"NO"<<endl;
}
