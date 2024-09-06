//TO check leap year or not
#include <stdio.h>

int main()
{
    int n;
    printf("\n Enter n value:");
    scanf("%d",&n);
    if(n%4==0||(n%400==0&&n%100!=0))
        printf("Given year is a leap year");
    else
        printf("Given year is not a leap year");
    return 0;
}
