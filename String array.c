#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],ch;
    printf ("\n\t\t\t\t\t....STRING....\n");
    start:
    fflush(stdin);
    printf ("\n\t\t\t\t\t.....HELLO.....\n\n");
    printf("\n Enter the String : ");
    fgets(s,sizeof(s),stdin);
    printf ("\n Entered String Is : ");
    puts(s);
    printf("\n\n Do you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        {
            printf ("\n\t\t\t\t   ......Program Restarted......\n\n");
            goto start;
        }
    else
        printf ("\n\t\t\t\t\t.....ThAnK U :-).....\n\n");
    return 0;
}
