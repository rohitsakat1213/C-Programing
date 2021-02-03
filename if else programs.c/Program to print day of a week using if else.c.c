#include<stdio.h>
#include<conio.h>
int main()
{

    int Day = 0;
     printf(" \n Enter a number (1-7) To given the day of week: \n");
     printf("\n ************************ DAY ***************************** \n");
     scanf("%d",&Day);

     if(Day == 1)
     {
         printf("\n Monday \n");
     }
     else if(Day == 2)
     {
         printf("\n Tuesday \n");
     }
     else if(Day == 3)
     {
         printf("\n Wednesday \n");
     }
     else if(Day == 4)
     {
         printf("\n Tharsday \n");
     }
     else if(Day == 5)
     {
         printf("\n Friday \n");
     }
     else if(Day == 6)
     {
         printf("\n Saturday \n");
     }
     else if(Day == 7)
     {
         printf("\n Sunday \n");
     }
     else
     {
         printf("\n Invalide Day");
     }

     getch();
     return 0;
}
