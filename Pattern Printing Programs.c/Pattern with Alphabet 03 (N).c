#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, c = 0;
    char ch = 'A';

    printf("\n Enter A Value to print pattern with Alphabets : ");
    scanf("%d",&c);

    printf("\n &&&&&&&&&&&&&&&&& Pattern &&&&&&&&&&&&&&&&& \n ");

    for(i=0; i<=c; i++)
    {
        for(j=0; j<=c; j++)
        {
            if(i>=j)
            {
                printf("%c",ch);
                ch++;
            }
          else
          {
              printf(" ");
          }

        }
        printf("\n");
    }

    getch();
    return 0;
}


