#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  vec.push_back(6);
  for(size_t i=0;i<vec.size();i++)
  {
    cout<<vec[i]<<" ";
  }
  cout<<endl;

  vec.erase(vec.begin()+4);
  vec.insert(vec.begin()+4,5);

  vec.insert(vec.begin()+4,3,0);

  for(size_t i=0;i<vec.size();i++)
  {
    cout<<vec[i]<<" ";
  }
   cout<<endl;
}
