#include<stdio.h>
#include<conio.h>
int main()
{
    int ch = 0;

    printf("\n TO Print The Ascii Value :");

    for( ch=1; ch<=127; ch++)
    {
        printf("\n\t\t Ascii character %c = %d \n",ch,ch);
    }

    getch();
    return 0;
}
