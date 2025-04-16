#include<stdio.h>
int main()
{
  double n;
  scanf("%lf",&n);

  double note[6]={100,50,20,10,5,2};
  double coin[6]={1,0.50,0.25,0.10,0.05,0.01};

  int numNotes[6]={0};
  int numCoins[6]={0};

  printf("NOTAS:\n");

  for(int i=0;i<6;i++)
  {
    numNotes[i]=n/note[i];
    n-=numNotes[i]*note[i];
    printf("%d nota(s) de R$ %.2lf\n",numNotes[i],note[i]);
  }

  printf("MOEDAS:\n");

  for(int j=0;j<6;j++)
  {
    numCoins[j]=n/coin[j];
    n-=numCoins[j]*coin[j];
    printf("%d moeda(s) de R$ %.2lf\n",numCoins[j],coin[j]);
  }

 return 0;
}
