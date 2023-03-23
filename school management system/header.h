#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#define Max 100
typedef char c;
typedef unsigned long ul;

typedef struct student_info
{
  c name[Max];
  ul id;
  c school_year[20];
  float score;
  c gender ;
  c phone [50];

  struct student_info *next;

}Students;

Students *Insert (Students *pdata ,Students * top);

Students * sort_element (Students *top);

void display(Students * top);

Students * Delete(Students *top, ul id);

void update(Students *top, ul id);

Students * Sort (Students *top);

void update_score(Students *top, ul id);
