#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[10000];
    int temp=0;
    fgets(str,sizeof(str),stdin);

    int len=strlen(str);
    if(str[len]=='\0')
        len--;


    for(int i=0; i<len-2; i++)
    {
        for(int i=0; i<len-2; i++)
        {
            if(str[i]>str[i+2])
            {
                temp=str[i];
                str[i]=str[i+2];
                str[i+2]=temp;
            }
            i++;
        }
        i++;
    }

    cout<<str<<endl;
    return 0;

}
