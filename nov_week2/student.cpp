#include <stdio.h>
#include<string.h>
struct StudentData {

    int stu_id;
    int stu_age;

};

int ageCalculate(int);
int main()
{
    struct StudentData student;
    int answer;

    printf("enter last four digits of id: ");
    scanf_s("%d", &student.stu_id);
    printf("enter age: ");
    scanf_s("%d", &student.stu_age);



    if (student.stu_id <= 200 && student.stu_id >= 100) {
        printf("Welcome to B-room\n");
        if (student.stu_age < 20 && student.stu_age>0) {
            printf("You are an underage B-room member, You still have %d year(s) to go to the Society\n\n", ageCalculate(student.stu_age));
        }
        else {
            printf("Let's go to the Society!!!\n");


        }
    }

    else {
        printf("You are not B-room family");
    }


    return 0;
}
int ageCalculate(int a) {
    int delta = 0;
    delta = 20 - a;
    return delta;
}