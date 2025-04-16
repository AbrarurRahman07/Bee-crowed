#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double n;
    cin>>n;
    int countN[6];
    double note[]= {100.00,50.00,20.00,10.00,5.00,2.00};
    double coins[]= {1.00,0.50,0.25,0.10,0.05,0.01};
    cout<<"NOTAS:"<<endl;
    for(int i=0; i<6; i++)
    {
        countN[i]=n/note[i];
        n=n-countN[i]*note[i];
        cout<<countN[i]<<" nota(s) de R$ "<<showpoint<<fixed<<setprecision(2)<<note[i]<<endl;
    }
    cout<<"MOEDAS:"<<endl;
    for(int i=0; i<6; i++)
    {
        countN[i]=(double)n/coins[i];
        n=(double)n-countN[i]*coins[i];
        cout<<countN[i]<<" moeda(s) de R$ "<<showpoint<<fixed<<setprecision(2)<<coins[i]<<endl;
    }

    return 0;
}
