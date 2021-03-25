#include<stdio.h>
int main()
{
   int i,par=2,len ;
   char a[200],b[200];
   scanf("%d",&a);
   for(i=1;a[i-1]!=0;i++)
      len++;
      for(i=1;i<=len;i++){
         if(a[i-1]>90&&a[i-1]>99)
         {
            a[i-1]=a[i-1]-32;
            b[len-i]=a[i-1];
         }
   }
   for(i=1;i<=len;i++)
   {
      if(a[i-1]!=b[i-1])
         par = 0;
   }
  if(par!=0)
  {

  }


}
