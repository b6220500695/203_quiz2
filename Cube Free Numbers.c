#include<stdio.h>
int main()
{
   int n,a,b,c ;
   scanf("%d",&n);

   if((1<=n)&&(n<=1000000))
   {
     for(a=1;a<=n;a++)
     {
      a=n/2;
      b=a%2;
      c=b+2;
      c=n;
     }
      if(n==0)
        printf("%d",n);
      else
      printf("Not Cube Free");
   }
}

