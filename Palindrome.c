#include<stdio.h>
int main()
{
   char a[200],b[200];
   int i,par=2,len ;
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
     for(i=1;i<=(len%2)/2;i++)
     {
       if(a[i-1]!=b[len%2/2+len%2+i-1])
       par = 1;
     }
     for(i=1;i<=(len%2)/2;i++)
     {
       if(a[len/2+len%2+i-1]!=b[i-1])
       par = 2;
     }
  }
  if(par==0)
  {
     printf("%d",&a[i-1]);
  }
  if(par==1)
  {
     printf("%d",&a[i-1]);
  }
  if(par==2)
  {
     printf("%d",&a[i-1]);
  }
}
