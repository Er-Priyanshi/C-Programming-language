#include <stdio.h>

int Lastdigit(int num);
int main()
{
    printf ("\n\t\t\t\t...Last Digit...\n\n");
    printf ("\t\t\t\t......HELLO.....\n\n");
  	int n,l;
  	printf("\n Please Enter any Number : ");
  	scanf("%d",&n);
  	l=Lastdigit(n);
  	printf(" \n The Last Digit of a Given Number %d => %d",n,l);
  	printf ("\n\n\n\t\t\t\t....ThAnK U :-)....\n\n\n");
  	return 0;
}

int Lastdigit(int num)
{
	return num %10;
