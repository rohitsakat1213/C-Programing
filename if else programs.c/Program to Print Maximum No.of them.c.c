#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0,No3=0;

    printf(" \n @@@@@@@@@@@@@@@@@@*********@@@@@@@@@@@@@@@@@@ \n");

    printf("\n TO Find Maximum Number of them:\n");
    scanf("%d%d%d",&No1,&No2,&No3);

    if((No1>No2)&&(No1>No3))
    {
        printf("\n\t Max is = %d",No1);
    }
    else if((No2>No1) && (No2>No3))
    {
        printf("\n\t Max is = %d",No2);
    }
    else
    {
        printf("\n\t Max is = %d",No3);
    }
    printf(" \n\n @@@@@@@@@@@@@@@@@@*********@@@@@@@@@@@@@@@@@@ \n");

    getch();
    return 0;
}
