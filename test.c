#include<stdio.h>

int main()
{
    float eco, stat, math, phy, oop, oop_lab, cgpa, total_credit=19;
    float digital_elect, digital_elect_lab;

    printf("Enter GPA for Economics: ");
    scanf("%f", &eco);

    printf("Enter GPA for Statistics: ");
    scanf("%f", &stat);

    printf("Enter GPA for Mathematics: ");
    scanf("%f", &math);

    printf("Enter GPA for Physics: ");
    scanf("%f", &phy);

    printf("Enter GPA for Digital Electronics: ");
    scanf("%f", &digital_elect);

    printf("Enter GPA for Digital Electronics Lab: ");
    scanf("%f", &digital_elect_lab);

    printf("Enter GPA for OOP: ");
    scanf("%f", &oop);

    printf("Enter GPA for OOP Lab: ");
    scanf("%f", &oop_lab);

    //cgpa calculation

    cgpa = (eco*2 + stat*2 + math*3 + phy*3 + digital_elect*3
             + digital_elect_lab*1 + oop*3 + oop_lab*2)/ total_credit;

    printf("Your cGPA for 1st year even semester is: %f", cgpa);

    //printf("hello");

    return 0;
}
