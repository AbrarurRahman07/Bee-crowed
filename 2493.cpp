#include<iostream>
using namespace std;
int put_value(int a,int b,char ch)
{
  int cal;
  if(ch=='+')
    cal=a+b;
  else if(ch=='-')
    cal=a-b;
  else if(ch=='*')
    cal=a*b;
  return cal;
}
int main()
{
  int n;
  string s[n],t,u;
  int x[50],y[50],z[50],p;
  char o,eq;
  while(cin>>n)
  {
    for(int i=0;i<n;i++)
    {
      cin>>n[i]>>y[i]>>eq>>z[i];
    }
    for(int i=0;i<n;i++)
    {
      cin>>s[i]>>p>>o;
      if(put_value(x[p-1],y[p-1],o)==z[p-1])

    }
  }
}
