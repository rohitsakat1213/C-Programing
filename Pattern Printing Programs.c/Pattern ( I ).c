#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, c = 0;
    printf("\n Enter A Value to print I..... \n ");
    scanf("%d",&c);

    printf("\n &&&&&&&&&&&&&&&&& Pattern &&&&&&&&&&&&&&&&& \n ");

    for(i=0; i<=c; i++)
    {
        for(j=0; j<=c; j++)
        {
            if (i==1 || i==c || j==(c+1)/2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}

