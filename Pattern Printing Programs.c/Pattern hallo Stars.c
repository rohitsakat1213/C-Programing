#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0,j = 0, r = 0, c = 0;
    printf("\n Enter A Row & Column Number :\n");
    scanf("%d%d",&r,&c);

    printf(" \n ************ Patturn Printing ************** \n\n ");

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            if(i==1 || j==1 || i==r || j==c)
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
