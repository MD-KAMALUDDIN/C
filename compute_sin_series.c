//compute sin series
#include <stdio.h>

int main()
{
    int i,n;
    float deg,x,nr,dr=1,s=0,temp=1,term;
    printf("\nEnter x value in degree:");
    scanf("%f",&deg);
    printf("\nEnter n value:");
    scanf("%d",&n);
    x=deg*3.14159/180;
    nr=x;
    s=x;
    for(i=2;i<=n;i++)
    {
        nr=nr*x*x;
        dr=dr*(i*2-2)*(i*2-1);
        temp=temp*(-1);
        term=nr/dr*temp;
        s=s+term;
    }
    printf("\n sin(%f)=%f",deg,s);
    return 0;
}
