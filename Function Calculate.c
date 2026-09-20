
#include <stdio.h>
int addNumbers(a,b);         // function prototype


int main()

{

    int n1,n2,sum;

    printf ("\n\t\t\t\t.....HELLO....\n\n");
    printf ("\n\t\t\t\t.......ADD......\n\n");
    printf("Enters two numbers:-\n=> ");
    scanf("%d%d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);


}

int addNumbers(int a, int b)         // function definition
{
    int result;
    result = a+b;
    return result;                  // return statement
}
