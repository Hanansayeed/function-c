#include<stdio.h>
    void main (void)
{
    int ID ,Pas;
    int k ;
    do {
    printf("please enter the user ID : ");
    scanf("%d",&ID);
    switch(ID)
    {
    case (50) :
    {
        printf("please enter the Password : ");
        scanf("%d",&Pas);
        for (int i = 0; i<3; i++)
        {
            if (Pas==1234)
            {
                printf("\nWelcome Ahmed");
                break;
            }
            else
            {
                printf("Wrong Password\n");
                if (i!=2)
                    {printf("Please Try Again \n");
                scanf("%d",&Pas);}

                else if( i==2 )
                printf("No More Times !! ");
            }
        }

    }
        break ;
    case (100):
    {
        printf("please enter the Password : ");
        scanf("%d",&Pas);
        for (int i = 0; i<3; i++)
        {
            if (Pas==5678)
            {
                printf("\nWelcome Omar");
                break;
            }
            else
            {
                printf("Wrong Password\n");
                if (i!=2)
                    {printf("Please Try Again \n");
                scanf("%d",&Pas);}

                else if( i==2 )
                printf("No More Times !! ");
            }
        }

    }
        break ;
    case (200):
    {
        printf("please enter the Password : ");
        scanf("%d",&Pas);
        for (int i = 0; i<3; i++)
        {
            if (Pas==91011)
            {
                printf("\nWelcome Ali");
                break;
            }
            else
            {
                printf("Wrong Password\n");
                if (i!=2)
                    {printf("Please Try Again \n");
                scanf("%d",&Pas);}

                else if( i==2 )
                printf("No More Times !! ");
            }
        }

    }
        break ;

    default :
    {
        printf("\nInvaild ID ");
    }
    break;
    }

    printf("\nIf you want to restart enter (1): ");
    scanf ("%d",&k);
    }while (k==1) ;


}
