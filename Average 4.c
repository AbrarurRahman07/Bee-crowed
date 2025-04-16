#include <stdio.h>

int main()
{
 double a,b,c,d,e,f,m;
 scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
 m=(a*2+b*3+c*4+d*1)/10;
 if(m>=5 && m<7)
 {
     scanf("%lf",&e);
 }

 printf("Media: %.1lf\n",m);

 if(m >= 7)
 {
     printf("Aluno aprovado.\n");
 }

 else if(m < 5)
 {
     printf("Aluno reprovado.\n");
 }

 else
 {
      printf("Aluno em exame.\n");

      printf("Nota do exame: %.1lf\n",e);
      printf("Aluno aprovado.\n");
      f=(m+e)/2;
      printf("Media final: %.1lf\n",f);
 }
    return 0;
}
