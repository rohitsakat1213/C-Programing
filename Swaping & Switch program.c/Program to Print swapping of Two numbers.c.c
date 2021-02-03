#include<stdio.h>
#include<conio.h>
int main()
{
    int No1,No2,Temp = 0;
    printf(" \n Swapping of Two Numbers:\n");

    printf("\n \n&&&&&&&&&&& ^^^^^^^^^^ &&&&&&&&&&&&\n \n");

    scanf("%d%d",&No1,&No2);

    printf("\n &&&&&&&&&&& ^^^^^^^^^^ &&&&&&&&&&&& \n");
    printf("\n\t |****** Swapping ******| \n");

    printf("\n ************ ========== *************\n");

    printf("\n Before Swapping 1st no = %d\n",No1);
    printf("\n Before Swapping 2nd no =%d\n",No2);

    Temp = No1;
    No1 = No2;
    No2 = Temp;

    printf("\n After Swapping 1st = %d\n",No1);
    printf("\n After Swapping 2nd = %d\n",No2);

    printf("\n ************ ========== *************\n");

    getch();
    return 0;

}
