#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;
    printf("\n Enter a Number: \n");
    scanf("%d",&No);

    if((No%5 == 0)&&(No%7 == 0))
    {
        printf("\n Number are Divisible by  Both 5 & 7 ");
    }
    else if(No%5 == 0)
    {
        printf("\n Number is Divisible by Only 5 ");
    }
    else if(No%7 == 0)
    {
        printf("\n Number is Divisible by Only 7 ");
    }
    else
    {
        printf("\n Numbers are Not both 5 & 7 ");
    }
   getch();
   return 0;
}
