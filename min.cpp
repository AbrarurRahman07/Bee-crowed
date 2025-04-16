#include<iostream>
using namespace std;
int main()
{
  int x,y,z,p,q,r;
  x=400,y=1334,p=800,r=1289;
  int v=max(x,max(y,max(p,r)));
  cout<<v;
}
