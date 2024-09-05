//TO perform a calculator using switch case
#include <stdio.h>

int main()
{
    int a,b;
    char ch;
    printf("\n Enter any two values:");
    scanf("%d%d",&a,&b);
    printf("\n Enter the operation:");
    scanf(" %c",&ch);
    switch(ch)
    {
    case '+':
        printf("\n %d",a+b);
        break;
    case '-':
        printf("\n %d",a-b);
        break;
    case '*':
        printf("\n %d",a*b);
        break;
    case '/':
        printf("\n %d",a/b);
        break;
    case '%':
        printf("\n %d",a%b);
        break;
    default:
        printf("\n operation is not in calculator");
    }
    return 0;
}
