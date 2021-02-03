#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0,C = 0,A = 0, B = 0;
    printf("\n Enter a Rows & Columns Value to pattern printing :\n ");
    scanf("%d%d",&R,&C);
    printf("\n ^^^^^^^^^^^^^^^^ Pattern Printing ^^^^^^^^^^^^^^^^^^^^^ \n\n");

    for (A = 1; A<=R; A++)
    {
        for(B = 1; B<=C; B++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n ^^^^^^^^^^^^^^^^ ******************** ^^^^^^^^^^^^^^^^^^^^^ \n\n");

    getch();
    return 0;
}
