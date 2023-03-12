#include <stdio.h>
#include <stdlib.h>
//#pragma pack (push,1)
 typedef struct date{
 int day;
 int month;
 int year;
 }Date;

 typedef struct students {
 char name[50];
 int id ;
 char grade[20];
 char gender [2];
 Date birthday;
 } studentData ;
