#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Dig = 0, Sum = 0, Temp = 0;

    printf("\n Enter a number To calculate Digits Sum :\n\n");
    scanf("%d",&No);

    printf("\n **************** %%%%%%%%%%%%%%%% *************** \n");

    Temp = No;

    if(No<0)
    {
        printf("\n Invalid Number :");
    }

    while(Temp>0)
    {
        Dig = Temp%10;
        Sum = Sum + Dig;
        Temp = Temp/10;
    }

    printf("\n Sum of Digit %d is = %d",No,Sum);

    printf("\n\n **************** %%%%%%%%%%%%%%%% *************** \n");

    getch();
    return 0;
}
