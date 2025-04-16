#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>vec_1;
  vec_1.push_back(1);
  vec_1.push_back(2);
  vec_1.push_back(3);
  vec_1.push_back(4);

  vector<int>vec_2;
  vec_2.push_back(10);
  vec_2.push_back(12);
  vec_2.push_back(31);
  vec_2.push_back(43);
  vec_2.push_back(12);

  cout<<"before"<<endl;
  for(size_t i=0;i<vec_1.size();i++)
  {
    cout<<vec_1[i]<<" ";
  }
   cout<<endl;

   for(size_t i=0;i<vec_2.size();i++)
  {
    cout<<vec_2[i]<<" ";
  }
   cout<<endl<<endl;

   swap(vec_1,vec_2);

   cout<<"after"<<endl;
   for(size_t i=0;i<vec_1.size();i++)
  {
    cout<<vec_1[i]<<" ";
  }
   cout<<endl;

   for(size_t i=0;i<vec_2.size();i++)
  {
    cout<<vec_2[i]<<" ";
  }
   cout<<endl<<endl;

   sort(vec_1.begin(),vec_1.end());///Sorting a vector
   cout<<"Sorting vector_1:"<<endl;
   for(size_t i=0;i<vec_1.size();i++)
  {
    cout<<vec_1[i]<<" ";
  }
   cout<<endl<<endl;

   reverse(vec_1.begin(),vec_1.end());///Reversing a vector
   cout<<"reversing vector_1:"<<endl;
   for(size_t i=0;i<vec_1.size();i++)
  {
    cout<<vec_1[i]<<" ";
  }
   cout<<endl;
}


