#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0,No2 = 0,No3 = 0,No4 = 1;

    printf("\n Enter a number to Fibonacci Series :\n ");
    scanf("%d",&No1);

    while(No1>0)
    {
        printf("\t %d",No2);
        No2 = No3+No4;
        No3 = No4;
        No4 = No2;

        No1--;
    }
    getch();
    return 0;
}
