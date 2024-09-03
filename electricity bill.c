//To Generate Electricity Bill with given information
//50 units and less $0.5
//100 units and less $0.75
//150 units and less $1.2
//above 150 units $1.5
#include <stdio.h>

int main()
{
   int u;
   float amo;
   printf("\n Enter number of units consumed:");
   scanf("%d",&u);
    if(u<=50)
        amo=u*0.5;
    else if(u<=100)
        amo=25+u*0.75;
    else if(u<=150)
        amo=100+u*1.2;
    else
        amo=280+u*1.5;
    printf("\n Total amount to be paid is %f",amo);
    return 0;
}
