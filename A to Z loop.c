
#include <stdio.h>
int main()
{
    char h;
    printf ("\n\n\t\t\t\t......A To Z Loop......\n\n");
    printf ("\t\t\t\t.........Hello.........\n\n");
    printf (" Enter an Alphabet: ");
    scanf("%c",&h);
    if (h<=90 && h>=65)
    {   printf ("\n\t*From %c To Z*\n Are:-\a",h);
        for (h;h<=90;h++)
        {
            printf ("\n\a => %c",h);
        }
    }
    else if (h<=122 && h>=97)
    {   printf ("\n\t*From %c To z*\n Are:-\a",h);
        for (h;h<=122;h++)
        {
            printf ("\n\a => %c",h);
        }
    }
    else
        printf ("\n\n\t\t!!!Entered Character Is Not An ALPHABET!!!\n\n");
        printf ("\n\n\t\t\t (:THANK U:) \n\n");
    return 0;
}
