#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';

    printf("\n ^^^^^^^^^^^^^^^^^^^^^^ ************* ^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("\n Check Weither given Character is Alphabets,Digit Or Symbol:\n");
    scanf("%c",&ch);

    if(((ch >= 'A')&&(ch <= 'Z')) || ((ch>= 'a')&&(ch <= 'z')))
    {
        printf("\n Given Character is Alphabets");
    }
    else if((ch >= '0') && (ch <= '9'))
    {
        printf("\n Given Character is Digits");
    }
    else
    {
        printf("\n Given Character is Spectial SYMBOLS");
    }
    printf("\n\n ^^^^^^^^^^^^^^^^^^^^^^ ************* ^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    getch();
    return 0;
}
