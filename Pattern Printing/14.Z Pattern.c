#include<stdio.h>
#include<conio.h>

int main()
{
     int i=0,j=0,c=0;

     printf("enter column value for Z pattern:");
     scanf("%d",&c);


       printf("\n.......................pattern.................\n\n");

           for(i=1;i<=c;i++)
         {
             for(j=1;j<=c;j++)
          {
              if(i==1||i==c||i+j==c+1)
              {

            printf(" * ");

             }
             else
            {

                printf("   ");
            }
          }

          printf("\n");
         }
         printf("\n.............................................\n");

         getch();
         return 0;

        }


