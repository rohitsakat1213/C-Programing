#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,Fact=1,Temp=0;
    printf("\n Enter A Number to Find Factorial of given Number :\n");
    printf("\n ^^^^^^^^^^^^^^^^^^^^^^^ FACT ^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Fact = Fact*Temp;
        Temp--;
    }
    printf("\n Factorial is %d is = %d ",No,Fact);
    printf("\n\n ^^^^^^^^^^^^^^^^^^^^ ************** ^^^^^^^^^^^^^^^^^^^^ \n\n ");

    getch();
    return 0;

}
