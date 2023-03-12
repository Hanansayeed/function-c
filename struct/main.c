#include "header.h"
#pragma pack (push,1)
int main ()
{
   /** scan element in struct
    studentData x ;
    printf("Enter The Student Name \n");
    scanf("%s",x.name);
    printf("Enter Student Id\n");
    fflush(stdin);
    scanf("%d",&x.id);
    printf("Enter the student grade\n");
    scanf("%s",x.grade);
    printf("Enter the student gender\n");
    scanf("%s",x.gender);
    printf("Enter the student birthday day\n");
    scanf("%d",&x.birthday.day);
    printf("Enter the student birthday month\n");
    scanf("%d",&x.birthday.month);
    printf("Enter the student birthday year\n");
    scanf("%d",&x.birthday.year);

    printf("The Student Name =%s\n",x.name);
    printf("The Student ID =%d\n",x.id);
    printf("The Student grade =%s\n",x.grade);
    printf("The Student gender =%s\n",x.gender);
    printf("day of birthday =%d\n",x.birthday.day);
    printf("month of birthday =%d\n",x.birthday.month);
    printf("year of birthday =%d\n",x.birthday.year);
*/
  /**
  insert 3 student in array of struct
    studentData x[3] ;
    studentData * ptr=x;
    int i;
    for(i=0;i<3;i++){
    printf("Enter The Student Name \n");
    scanf("%s",(ptr+i)->name);
    printf("Enter Student Id\n");
    fflush(stdin);
    scanf("%d",&(ptr+i)->id);
    printf("Enter the student grade\n");
    scanf("%s",(ptr+i)->grade);
    printf("Enter the student gender\n");
    scanf("%s",(ptr+i)->gender);
    printf("Enter the student birthday day\n");
    scanf("%d",&(ptr+i)->birthday.day);
    printf("Enter the student birthday month\n");
    scanf("%d",&(ptr+i)->birthday.month);
    printf("Enter the student birthday year\n");
    scanf("%d",&(ptr+i)->birthday.year);
    }
    for(i=0;i<3;i++){
    printf("The Student Name =%s\n",(ptr+i)->name);
    printf("The Student ID =%d\n",(ptr+i)->id);
    printf("The Student grade =%s\n",(ptr+i)->grade);
    printf("The Student gender =%s\n",(ptr+i)->gender);
    printf("day of birthday =%d\n",(ptr+i)->birthday.day);
    printf("month of birthday =%d\n",(ptr+i)->birthday.month);
    printf("year of birthday =%d\n",(ptr+i)->birthday.year);

    }

    */

    return 0;
 }
