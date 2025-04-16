#include <iostream>
using namespace std;

int main()
{
    string r,p,s,l,sp;
    r="pedra";
    p="papel";
    s="tesoura";
    l="lagarto";
    sp="Spock";
    string S,R;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>S;
        cin>>R;
        if(S==R)
        {
            cout<<"Caso #"<<i<<": De novo!"<<endl;
        }
        else if((S==s && R==p)||(S==p && R==r)||(S==r && R==l)||(S==l && R==sp)||(S==sp && R==s)||(S==s && R==l)||(S==l && R==p)||(S==p && R==sp)||(S==sp && R==r)||(S==r && R==s))
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else
        {
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
    }
    return 0;
}
