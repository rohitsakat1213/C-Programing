#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0, No2 = 0, Sum = 0;

    printf("\n\t Addition of 10 inputed Numbers:\n ");
    printf("\n\t ======================= *************** ===========================\n ");

    for(No2 = 1; No2 <=10; No2++)
    {
        printf("\n\t Enter Number %d = ",No2 );
        scanf("%d",&No1);
        //Sum = Sum + No1;
        Sum += No1;
    }
    printf("\n\t ======================= *************** ===========================\n ");("\n ======================= ^^^^^^^^^^^^^^^ ===========================\n ");
    printf("\n \t\t\t\t\t\t __________\n ");
    printf("\n\t ========================>\t ********|Addition| ******** = %d",Sum);
    printf(" \n\t\t\t\t\t\t __________ ");
    printf("\n\n\t ======================= *************** ===========================\n ");

    getch();
    return 0;

}
