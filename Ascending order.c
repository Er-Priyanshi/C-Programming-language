
#include<stdio.h>
int main()
{
  int a[50],i,j,k,c;

  printf ("\n\n\t\t\t\t....Ascending Order....\n\n");
  printf ("\t\t\t\t........HELLO.........\n\n");
  printf (" Enter The Range: ");
  scanf ("%d",&k);
  for (i=1;i<=k;i++)
  {
    printf ("\n (%d).Enter The Number => ",i);
    scanf ("%d",&a[i]);
   }
   for (i=0;i<=k;i++)
   {
     for(j=1;j<=k-1;j++)
     {
       if (a[j]>a[j+1])
       {
         c=a[j];
         a[j]=a[j+1];
         a[j+1]=c;
         }}}
printf ("\n Numbers in ascending order :- \n\n=>\t");
       for (i=1;i<=k;i++)
    {
      printf (" %d;",a[i]);
     }
     printf ("\n\n\t\t\t ^_^THANK YOU ^_^ \n\n");
     return 0;
}
