#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Rev = 0, Temp = 0;

    printf("\n Enter a number To Get Reverse Number:\n\n");
    scanf("%d",&No);

    printf("\n **************** %%%%%%%%%%%%%%%% *************** \n");

    Temp = No;

    if(No<0)
    {
        printf("\n Invalid Number :");
    }

    while(Temp>0)
    {
        Rev = (Rev * 10) + (Temp%10);
        Temp/= 10;
    }
    if(No==Rev)
    {
        printf("\n Given Number is Palindrome. ");
    }
    else
    {
        printf("\n Given Number is Not Palindrome. ");
    }

    printf("\n\n **************** %%%%%%%%%%%%%%%% *************** \n");

    getch();
    return 0;
}

