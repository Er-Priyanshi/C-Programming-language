
#include<stdio.h>
int main()
{
    int i=1;
    for ( ; ; )  //Valid
    {
        printf ("%d\n",i);
        i++;
        if (i>=10)
            break;
    }
    return 0;
}
                //While ()  INVALID
                //While (1) VALID ,INFINITE Loop
