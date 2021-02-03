#include<stdio.h>
#include<conio.h>
int main()
{
    int row = 0, i = 0, j = 0;
    printf("\n Enter a Number to print pattern :\n");
    scanf("%d",&row);

    printf("\n ================ Pattern Printing ================= \n\n");

    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    printf("\n ===================== ******** ======================= \n");

    getch();
    return 0;

}


