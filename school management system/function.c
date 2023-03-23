#include "header.h"

Students * Insert (Students *pdata ,Students * top)
{
   Students *pd =(Students *)malloc(sizeof (Students));

    strcpy(pd->name, pdata->name);
    pd->id=pdata->id;
    strcpy(pd->school_year,pdata->school_year);
    pd->score=pdata->score;
    pd->gender=pdata->gender;
    strcpy(pd->phone, pdata->phone);
    pd->next=NULL;

     if(top==NULL)
    {

        top = pd;
    }
    else{

        pd->next = top;
        top = pd;
    }

    return top;
}
Students * sort_element (Students *top)
{
    Students *temp =NULL;
    Students *ptr;
    Students*lptr;
    while(top!=NULL)
    {
        ptr=top;
        lptr=top;
        while(ptr!=NULL)
        {
            if(strcmp(ptr->name ,lptr->name)>0)
            {
                lptr=ptr;
            }
            ptr=ptr->next;
        }
        temp = Insert(lptr,temp);
        top = Delete (top,lptr->id);

    }
    printf("\nSorted Names Successful!!..\n");
    return temp;
}

void display(Students * top)
{

    Students * temp = top;
    if(top)
    {
        while(temp!=NULL){
        printf("\nname: %s\n", temp->name);
        printf("id Number: %lu\n", temp->id);
        printf("school year: %s\n", temp->school_year);
        printf("score of student: %2.2f\n", temp->score);
        printf("gender: %c\n", temp->gender);
        printf("Phone: %s\n", temp->phone);
        printf("\n");
        temp = temp->next;
    }
    }
    else
    {
        printf("\n Not Found Student To Show !!!\n");
    }
}

Students * Delete(Students *top, ul id)
{
     Students * temp1 = top;
     Students * temp2 = top;

          while(temp1!=NULL){

          if(temp1->id==id){


            if(temp1==temp2){
                /* this condition will run if
                the record that we need to delete is the first node
                 */
                top = top->next;
                free(temp1);
            }
            else{

                temp2->next = temp1->next;
                free(temp1);
            }

            return top;

        }

        temp2 = temp1;
        temp1 = temp1->next;

            }

        printf("\nStudent with Id %lu is not found !!!\n", id);
    return top;

}

void update(Students *top, ul id)
{

    Students * temp = top;

        while(temp!=NULL){

         if(temp->id==id){
            printf("Record with Id number %lu Found !!..\n", id);
                   printf("Enter The new Name \n");
                   fflush(stdin);
                   gets(temp->name);
                   printf("Enter the new school year of student\n");
                   fflush(stdin);
                   gets(temp->school_year);
                   printf("Enter the new student score\n");
                   scanf("%f",&temp->score);
                   printf("Enter the new student gender\n");
                   fflush(stdin);
                   scanf("%c",&temp->gender);
                   printf("Enter the new phone number\n");
                   scanf("%s",temp->phone);
                   printf("\nUpdateSuccessful!!..\n");
                 return;
             }
        temp = temp->next;
            }
        printf("\nStudent with Id %lu is not found !!!\n", id);

}

Students * Sort (Students *top)
{
    Students *temp =NULL;
    Students *ptr;
    Students*lptr;
    while(top!=NULL)
    {
        ptr=top;
        lptr=top;
        while(ptr!=NULL)
        {
            if(ptr->score > lptr->score)
            {
                lptr=ptr;
            }
            ptr=ptr->next;
        }
        temp = Insert(lptr,temp);
        top = Delete (top,lptr->id);

    }
    printf("\nSorted Score Successful!!..\n");
    return temp;
}

void update_score(Students *top, ul id)
{
        Students * temp = top;
            while(temp!=NULL){
                printf("\nid Number: %lu\n", temp->id);
                printf("score of student: %2.2f\n\n", temp->score);
                  if(temp->id==id){
                   printf("Enter the new student score\n");
                   scanf("%f",&temp->score);
                   printf("\nUpdate Successful!!!\n");
                    return;
                  }
                  temp = temp->next;
                   }
                printf("\nStudent with Id %lu is not found !!!\n", id);

}
