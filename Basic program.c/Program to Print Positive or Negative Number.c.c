// decision making statement ....
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;

    printf("\n ******** ++++++++ ******** ");
    printf(" \n Enter a Number either Positive or Negative = \n");
    scanf("%d",&No);

    if ( No > 0)
    {
        printf("\n Positive");
    }
    else if ( No < 0)
    {
        printf("\n Negative");
    }
    else
    {
        printf("\n Nutral");
    }
    printf(" \n\n ******* +++++++ ******** \n");

    getch();
    return 0;

}
