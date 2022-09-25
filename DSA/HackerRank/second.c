#include <stdio.h>
int main()
{
struct student {
char name[30];
int rollno;
} stud;
printf ("Enter your RollNo : ");
scanf ("%d",&stud.rollno);
printf ("\nEnter your Name : ");
scanf ("%s", stud.name);
printf ("\nRollNo : %d\n Name : %s", stud.rollno, stud.name);
return 0;
}