#include<stdio.h>
#include<conio.h>
int main()
{

    char ch = '\0';
    printf(" \n Enter a character : \n");
    scanf("%c",&ch);

    printf(" \n $$$$$$$$$$$$$$$$$$$ ^^^^^^^^^^^^ $$$$$$$$$$$$$$$$$$$ \n");

    switch(ch)
    {
    case 'A':
    case 'a':
    case 'B':
    case 'b':

        printf("\n GOD Created World :\n");
        break;

    case 'C':
    case 'c':
    case 'd':
    case 'D':

        printf("\n GOD Addded Humans:\n ");
        break;

    case 'E':
    case 'e':
    case 'F':
    case 'f':

        printf("\n GOD added Love: \n ");
        break;

    case 'G':
    case 'g':
    case 'H':
    case 'h':

        printf("\n GOD added Humanity: \n");
        break;

    case 'I':
    case 'i':
    case 'J':
    case 'j':

        printf("\n Humans added Cast:\n");
        break;


    case 'K':
    case 'k':
    case 'L':
    case 'l':

        printf("\n Humans added Religian:\n");
        break;


    case 'M':
    case 'm':
    case 'N':
    case 'n':

        printf("\n Cast Remove Love :\n");
        break;


    case 'O':
    case 'o':
    case 'P':
    case 'p':

        printf("\n Religian Remove Humanity :\n");
        break;


    case 'Q':
    case 'q':
    case 'R':
    case 'r':

        printf("\n GOD Left....\n");
        break;

    default:
        printf("\n Mo massages to this Character :\n");
        break;

    }

     printf(" \n $$$$$$$$$$$$$$$$$$$ ^^^^^^^^^^^^ $$$$$$$$$$$$$$$$$$$ \n");
     printf("\n\t Thanks You..... \n ");
    getch();
    return 0;

}
