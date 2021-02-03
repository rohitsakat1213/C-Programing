#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter a Number TO Print A Table :\n");
    scanf("%d",&No1);

    for( No2 = 1; No2 <= 10; No2++ )
    {
        printf(" \n\t %d",No1*No2);
    }
    printf("\n\n THANKS YOU.......... \n");
    getch();
    return 0;

}
