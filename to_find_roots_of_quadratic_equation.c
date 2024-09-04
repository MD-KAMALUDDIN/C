//to find roots of quadratic equation
#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,r1,r2;
    printf("\nEnter a,b,c values:");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=(b*b-(4*a*c));
    r1=(-b+sqrt(d))/2*a;
    r2=(-b-sqrt(d))/2*a;
    if(d>0)
        printf("\n roots are real and discrete :\n%lf\n%lf",r1,r2);
    else if(d==0)
        printf("\n roots are real and equal:\n%lf\n%lf",r1,r2);
    else
        printf("roots are imaginary");
    return 0;
}
