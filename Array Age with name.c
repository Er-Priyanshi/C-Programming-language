
#include<stdio.h>
int main()
{
    int a[]={16,18,20},i;
    char s[]={"shreya","aarav","riya"};

    printf ("\n\t\t\t\t\t....ARRAY....\n");
    printf ("\n\t\t\t\t\t.....HELLO.....\n\n");
    for (i=0;i<=2;i++)
    {
        printf("\n\n %d). Name-%c\n\n\t Age- %d",i+1,s[i],a[i]);
    }
        printf ("\n\t\t\t\t\t....ThAnK YoU:-) ....\n\n");
    return 0;
}
