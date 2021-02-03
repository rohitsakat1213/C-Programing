#include<stdio.h>
#include<conio.h>
int main()
{
    int Day = 0;
    printf(" \n To The Print (1-7)days in a weak: \n");
    printf("\n *********** Enter No. ************* \n");
    scanf("%d",&Day);
    printf("\n &&&&&&&&&&&&&& Day &&&&&&&&&&&&&&& \n");

    switch(Day)
    {
    case 1:
        printf("\n Monday\n");
        break;

    case 2:
        printf("\n Tuesday\n");
        break;

    case 3:
        printf("\n Wednesday\n");
        break;

    case 4:
        printf("\n Thursday\n");
        break;

    case 5:
        printf("\n Friday\n");
        break;

    case 6:
        printf("\n Saturday\n");
        break;

    case 7:
        printf("\n Sunday\n");
        break;

    default:
            printf("\n Invalid Day\n");
            break;
    }
    printf("\n &&&&&&&&&&&&&& Day &&&&&&&&&&&&&&& \n");
    printf(" \n Thanks you ..... \n");

    getch();
    return 0;


}
