#include<stdio.h>
#include<conio.h>
int main()
{
    int A,B,C;

    printf(" \n Enter a number = \n");
    scanf("%d",&B);

    for( A=1;A<=10;A++)

    {
        C=B*A;
        printf(" \n\n\t %d",C);
    }

    getch();
    return 0;
}

