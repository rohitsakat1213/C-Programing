#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;

    printf("\n Enter A Number to Check its Even Or ODD :\n ");
    scanf("%d",&No);

    if(No%2==0)
    {
        ptintf("\n Number is Even ");
    }
    else
    {
        printf("\n Number is Odd ");
    }

    getch();
    return 0;

}
