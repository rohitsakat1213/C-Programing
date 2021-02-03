// Program to Check Weither GIven Character is Uppercase or Lowercase ?
#include<stdio.h>
#include<conio.h>
int main()
{
   char ch = '\0';

   printf(" \n *******************&&&&&&&&&&&&&&***************************\n");
   printf("\n To check Given Character is Uppercase Or Lowercase: \n");
   scanf("%c",&ch);

   if((ch >= 'A')&&(ch <= 'Z'))
   {
       printf("\n Given Character is Uppercase ");
   }
   else if(( ch >= 'a')&&(ch <= 'z'))
   {
       printf(" \n Given Character is Lowercase ");
   }
   else
   {
       printf("\n Given Character is Spectial Symbol ");
   }

   printf(" \n\n *******************&&&&&&&&&&&&&&***************************\n");

   getch();
   return 0;
}
