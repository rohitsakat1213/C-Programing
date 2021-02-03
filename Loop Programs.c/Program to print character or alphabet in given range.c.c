#include<stdio.h>
#include<conio.h>
int main()
{
    char Loop='\0',Sc='\0',Ec='\0';

    printf("\n Enter a Starting character :");
     Sc=getche();                // scanf("%c",&Sc);
    printf("\n Enter a Ending character :");
     Ec=getche();               // scanf("%c",&Ec);

    for(Loop=Sc; Loop<=Ec; Loop++)
    {
        printf("\n %c",Loop);
    }

    getch();
    return 0;
}
