//Factorial of a given number
#include <stdio.h>

int main()
{
    int n,f=1,i=1;
    printf("Enter any number:");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("Factorial of %d is %d",n,f);
    return 0;
}
