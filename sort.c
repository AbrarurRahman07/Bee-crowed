#include <stdio.h>

int main()
{
 int arr[3],temp,a,b,c;
 for(int i=0 ;i <3; i++)
 {
     scanf("%d",&arr[i]);
 }
 a=arr[0];
 b=arr[1];
 c=arr[2];
 for(int i=0;i<3;i++)
 {
     for(int j=i+1;j<3;j++)
     {
         if(arr[j]<arr[i])
         {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
     }
 }

 printf("%d\n%d\n%d\n",arr[0],arr[1],arr[2]);
 printf("\n");
 printf("%d\n%d\n%d\n",a,b,c);

    return 0;
}
