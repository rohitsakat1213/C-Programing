#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0,Min=0,Max=0;
     printf("\n TO Check the Maximum Number of 10 inputed Number: \n");
     printf(" \n ******************* &&&&&&&&&&&&&&&& ********************* \n");

     for(No2=1;No2<=10;No2++)
     {
         printf("\n\t Enter a Number %d = ",No2);
         scanf("%d",&No1);

         if( No2 == 1)
         {
             Max = No1;
             Min = No1;
             continue;
         }
         if(No1>Max)
         {
             Max = No1;
         }
         if(No1<Min)
         {
             Min = No1;
         }

     }
     printf(" \n ******************* &&&&&&&&&&&&&&&& ********************* \n");
     printf("\n\t Maximum is = %d ",Max);
     printf("\n\t Minimum is = %d ",Min);

     getch();
     return 0;
}

