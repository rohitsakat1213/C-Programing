#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';
    printf("\n To print the given Character :\n");

    for(ch='A'; ch>='6'; ch++)
    {
        printf("\n %c",ch);
    }
    getch();
    return 0;
}
