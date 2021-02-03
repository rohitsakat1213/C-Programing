#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n ****************************================****************************\n");
    printf("\n\t\t Student detail information:\n");
    printf("\n\t\t No.|Name| |Physics. Chemistry. Biology.| |Total| |Avarage|\n");
    printf("\n\t\t %-5d%-7s%-3d%-3d%-3d%-4d%-0.2f",2,"Rohit",87,75,96,258,86.777);
    printf(" \n\t\t %-5d%-7s%-3d%-3d%-3d%-4d%-0.2f",678,"Rahul",67,78,99,244,81.3333);
    printf(" \n\t\t %-5d%-7s%-3d%-3d%-3d%-4d%-0.2f",99,"Akshay",55,90,81,226,75.7);
    printf(" \n\t\t %-5d%-7s%-3d%-3d%-3d%-4d%-0.2f",03,"Ganesh",87,77,96,258,86.79);
    printf("\n\n ****************************================****************************\n");

    getch();
    return 0;
}
