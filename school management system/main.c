#include "header.h"

int main()
{
    printf("\t\t\t\t\tStudent Management System\n");
    Students x;
    Students *top=NULL;
    unsigned short choice;
    printf("0 to End The Program\n1 to Insert student details\n2 to Delete student details\n3 to Sort all names of students in alphabetical\n4 to Display all student details\n5 to Update student details\n6 to Sort records based on score\n7 to Update student score \n");
    do
    {
        printf("\nEnter Choice: ");
        scanf("%hu", &choice);
        switch (choice)
        {
            case 0:
                   printf("\nEnd The Program ...\n");
                     break;
            case 1:
                   printf("\nEnter The Student Name \n");
                   fflush(stdin);
                   gets(x.name);

                   printf("Enter Student Id\n");
                   scanf("%lu",&x.id);

                   printf("Enter the school year of student\n");
                   fflush(stdin);
                   gets(x.school_year);

                   printf("Enter the student score\n");
                   scanf("%f",&x.score);

                   printf("Enter the student gender\n");
                   fflush(stdin);
                   scanf("%c",&x.gender);

                   printf("Enter the phone number\n");
                   scanf("%s",x.phone);

                  top= Insert(&x,top);
                break;
            case 2:
                if(top!=NULL)
                {
                printf("\nEnter id number to delete: ");
                scanf("%lu", &x.id);
                top= Delete(top, x.id);
                }
                else{ printf("\n Not Found Student to delete!!!\n");}
                break;
            case 3:
                if(top!=NULL)
                {top=sort_element(top);}
                else{ printf("\n Not Found Student to sorted!!!\n");}
                break;
            case 4:
                display(top);
                break;
            case 5:
                if(top!=NULL)
                {
                printf("\nEnter id number to update: ");
                scanf("%lu", &x.id);
                update(top, x.id);
                }
                else{ printf("\n Not Found Student to update!!!\n");}

                break;
            case 6:
                if(top!=NULL)
                {top=Sort(top);}
                else{ printf("\n Not Found Student to sorted!!!\n");}
                break;

            case 7:
                if(top!=NULL)
                {
                printf("\nEnter id number to update: ");
                scanf("%lu", &x.id);
                update_score (top, x.id);
                }
                else{ printf("\n Not Found Student to update score!!!\n");}
                break;
            default:
                printf("\nWrong Choice!!\nPlease Try Again ...\n ");

    }
 }
    while (choice != 0);


}

