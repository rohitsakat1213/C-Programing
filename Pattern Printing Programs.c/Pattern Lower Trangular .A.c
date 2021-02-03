#include<stdio.h>
#include<conio.h>
int main()
{
    int r = 0, i = 0, j = 0;
    printf("\n Enter a Number to print pattern :\n");
    scanf("%d",&r);

    printf("\n ================ Pattern Printing ================= \n\n");

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n ===================== ******** ======================= \n");

    getch();
    return 0;

}


