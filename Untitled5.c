#include<stdio.h>
int main()
{
  float n;
  float x=.01;
  int a,b,c,d,e,f,g,h,i,j,k,l;
  a=b=c=d=e=f=g=h=i=j=k=l=0;
  scanf("%f",&n);
  if(n>=100)
  {
    a=n/100;
    n=n-(a*100);
  }
  if(n>=50)
  {
    b=n/50;
    n=n-(b*50);
  }
  if(n>=20)
  {
    c=n/20;
    n=n-(c*20);
  }
  if(n>=10)
  {
    d=n/10;
    n=n-(d*10);
  }
  if(n>=5)
  {
    e=n/5;
    n=n-(e*5);
  }
  if(n>=2)
  {
    f=n/2;
    n=n-(f*2);
  }

  printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
  if(n>=1)
  {
    g=n/1;
    n=n-(g*1);
  }
  if(n>=.50)
  {
    h=n/.50;
    n=n-(h*.50);
  }
  if(n>=.25)
  {
    i=n/.25;
    n=n-(i*.25);
  }
  if(n>=.10)
  {
    j=n/.10;
    n=n-(j*.10);
  }
  if(n>=.05)
  {
    k=n/0.05;
    n=n-(k*0.05);
  }
  if(n>=.01)
  {
    l=n/x;
    n=n-(l*x);
  }
  printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",l);
}

