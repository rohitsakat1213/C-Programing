#include<stdio.h>
#include<conio.h>
int main()
{
    int R_NO=0,C_NO=0,S_NO=0,E_NO=0;
    printf("\n Enter a Table in a given range :\n");
    scanf("%d%d",&S_NO,&E_NO);

    printf("\n\tTable From...... %d To %d =>\n\n",S_NO,E_NO);

    for(R_NO=1;R_NO<=10;R_NO++)
    {
        for (C_NO=S_NO;C_NO<=E_NO;C_NO++)
        {
            printf("\t%5d",C_NO*R_NO);
        }
        printf("\n");
    }

    getch();
    return 0;
}

