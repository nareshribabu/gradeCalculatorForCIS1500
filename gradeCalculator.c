/*****************************babuNareshriA1.c*********************************
Student Name: Nareshri Babu                      Email Id: nbabu@uoguelph.ca
Date: October 3rd, 2018                          Course Name: CIS 1500
I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
1) I have read and understood the University policy on academic integrity;
2) I have completed the Computing with Integrity Tutorial on Moodle;
3) I have achieved at least 80% in the Computing with Integrity Self Test.
I assert that this work is my own. I have appropriately acknowledged any and
all material (data, images, ideas or words) that I have used, whether directly
quoted or paraphrased. Furthermore, I certify that this assignment was prepared
by me specifically for this course.
********************************************************************************/

/*******************************************************************************
           Compiling the program
********************************************************************************
The program should be compiled using the following flags:
-std=c99
-Wall
compiling: gcc assn1.c -std=c99 -Wall -o assn1
********************************************************************************
           Running the Program
********************************************************************************

running: ./assn1
The user is prompted for 11 different inputs before the output is generated.
********************************************************************************/

#include <stdio.h>

int main() {

  //declaring variables (on separate line for readability)
  double weeklyLabs;
  double dailyPractice;
  double labExam1;
  double labExam2;
  double assignment1;
  double assignment2;
  double assignment3;
  double moss1;
  double moss2;
  double moss3;
  double gradeGoal;      //grade you desire for the overall course grade
  double totalPoints;   //total grade(points) you got from each assessment
  double needGrade;
  double needGradePercent;
  int bonus;

  //Asking the user for input

  printf("\n");
  printf("Enter the following marks (each out of 100): \n\n");

  printf("Weekly Labs: ");
  scanf("%lf", &weeklyLabs);

  printf("Daily Practice: ");
  scanf("%lf", &dailyPractice);

  printf("Lab Exam 1: ");
  scanf("%lf", &labExam1);

  printf("Lab Exam 2: ");
  scanf("%lf", &labExam2);

  printf("Assignment 1: ");
  scanf("%lf", &assignment1);

  printf("MOSS output for A1 (0/1): ");
  scanf("%lf", &moss1);

  printf("Assignment 2: ");
  scanf("%lf", &assignment2);

  printf("Moss output for A2 (0/1): ");
  scanf("%lf", &moss2);

  printf("Assignment 3: ");
  scanf("%lf", &assignment3);

  printf("Moss output for A3 (0/1): ");
  scanf("%lf", &moss3);

  printf("\n\n");

  printf("How much do you desire as an overall course grade: ");
  scanf("%lf", &gradeGoal);
  printf("\n\n");

  //moss decisions and it's impact on the Assignments

  if (moss1 == 0) {
    (assignment1 = 0);
  }

  if (moss2 == 0) {
     (assignment2 = 0);
  }

  if (moss3 == 0) {
    (assignment3 = 0);
  }

  //percent of the marks you actually got

  totalPoints = ((0.10 * weeklyLabs) + (0.10 * dailyPractice) + (0.10 * labExam1) + (0.10 * labExam2) +
               (0.05 * assignment1) + (0.10 * assignment2) + (0.10 * assignment3));


  //do the if statement for the moss output
  if ((assignment1 == 0) && (assignment2 == 0) && (assignment3 == 0)) {
    (totalPoints = 0);
    printf("********************************************************\n");
    printf("You cannot pass the course - try harder next time.\n");
    printf("********************************************************\n");
  }

  else {

    // add 3 to totalPoints if both the lab exams are perfect
    if ((labExam1 == 100) && (labExam2 == 100)) {
      bonus = 3;
      (totalPoints = totalPoints + bonus);
    }

    else {
      bonus = 0;
   }


    //Grades table
    printf("************************************************************\n");
    printf("Assessment          Weight          Marks\n");
    printf("------------------------------------------------------------\n");
    printf("Weekly Labs           10              %.2lf\n", weeklyLabs);
    printf("Daily Practice        10              %.2lf\n", dailyPractice);
    printf("Lab Exam I            10              %.2lf\n", labExam1);
    printf("Lab Exam II           10              %.2lf\n", labExam2);
    printf("Bonus from lab exams:                 %d\n", bonus);
    printf("Assignment 1          5               %.2lf\n", assignment1);
    printf("Assignment 2          10              %.2lf\n", assignment2);
    printf("Assignment 3          10              %.2lf\n", assignment3);
    printf("Final Exam            35              To be determined\n\n");

    //current course mark calculations

    printf("************************************************************\n\n");
    printf("Current course mark = %.2lf / 65.00\n", totalPoints);

    //How much marks do you need to reach your goal?

    needGrade = gradeGoal - totalPoints;

    printf("You need %.2lf / 35.00 to reach your goal (%.0lf)\n", needGrade, gradeGoal);

    //the marks you need to reach your goal in percentage

    needGradePercent = (needGrade / 35.00) * 100;

    printf("In percentage, you need %.2lf %% to reach your goal (%.0lf)\n\n", needGradePercent, gradeGoal);
    printf("************************************************************\n\n");

  }

  return 0;

}

