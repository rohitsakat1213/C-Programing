#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, c = 0;

    printf("\n Enter a value a :\n ");
    scanf("%d",&c);

    printf("\n ===================== Pattern ========================= \n ");

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=c;j++)
        {
            if (i>=j)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    getch();
    return 0;

}
