
#include <stdio.h>
#include <math.h>
int convert(int);
int main()
{
  int x,y;
  printf ("\n\n\t\t\t\t  ......Binary Function......\n\n");
  printf ("\t\t\t\t.........HELLO.........\n\n");
  printf("\n\n Enter A Number : ");
  scanf("%d",&x);
  y=convert(x);
  printf("\n %d In Binary = %d\n\n",x,y);
  return printf ("\n\t\t\t\t\t....ThAnK YOu :-) ....\n\n");
}
int convert(int x)
{
  int y=0;
  int z,i=1;

  while(x!=0)
{
    z=x%2;
    x/=2;
    y+=z*i;
    i*=10;
}
  return y;
}
