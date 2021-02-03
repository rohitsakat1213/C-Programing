#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Temp = 0, Dig = 0, Dsum = 0, Dcnt = 0;

    printf("\n Enter A Number To Calculate sum Of 4 Digit Number :=>\n ");
    printf("\n \n <=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>\n\n ");
    scanf("%d",&No);

    printf("\n\n VVVVVVVVVVVVVVVVVVVVV ^^^^^^^^^^^^^^^^^^^ VVVVVVVVVVVVVVVVVVVVVVV \n\n");

    Temp = No;

    if (No < 0)
    {
        printf("\n Invalid Number.... ");
    }

    while (Temp > 0)
    {
        Dcnt++;
        Temp = Temp / 10;
    }

    if(Dcnt == 4)
    {
        Temp = No;

        while(Temp > 0)
        {
            Dig =Temp % 10;
            Dsum = Dsum + Dig;
            Temp = Temp / 10;
        }

        printf("\n\t\t Sum Of 4 Digit %d = %d",No,Dsum);

    }

    else
    {
        printf("\n Given Number is Not 4 Digit Number .");
    }

    printf("\n\n\n\n Thanks........ \n");
    printf("\n \n <=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>=<=>\n\n ");

    getch();
    return 0;
}
