#include <stdio.h>
int main()
{
  int n, i, range;
  char ch;
  printf ("\n\t\t\t\t\t   ....Tables....\n");
  start:
  printf ("\n\t\t\t\t\t........HELLO........\n\n");
  fflush (stdin);

  printf("Enter a Number: ");
  scanf("%d",&n);
  do
  {printf("Enter the range: ");
   scanf("%d",&range);
  } while (range<=0);

  for (i=1;i<=range;++i)
  {
    printf("\t\t\t%d * %d = %d \n",n,i,n*i);
  }
    printf("\nDo you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        {
            printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
            goto start;
        }
        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");
    return 0;
}
