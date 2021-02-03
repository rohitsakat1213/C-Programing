#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;
    Up:
    printf("\n Enter a Number to check its Even or Odd :\n ");
    scanf("%d",&No);

    if(No == 0)
    {
        printf("\n Number is Neutral ");
        goto Up;
    }

    (No%2 == 0)?printf("\n Number is Even :"):printf("\n Number is Odd :");

    getch();
    return 0;

}

