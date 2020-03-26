#include <stdio.h>

struct Student {
    char* name;
    int roll_number;
    float cgpa;
};

int main()
{
    int i = 0, n = 5;

    struct Student student[n];

    student[0].roll_number = 001;
    student[0].name = "jdwjdojkd";
    student[0].cgpa =3.1;

    student[1].roll_number = 002;
    student[1].name = "ajenljwdlk";
    student[1].cgpa = 3.4;

    student[2].roll_number = 003;
    student[2].name = "andkuwedo";
    student[2].cgpa = 2.8;

    student[3].roll_number = 004;
    student[3].name = "iujdkjwoi";
    student[3].cgpa = 3.6;

    student[4].roll_number = 005;
    student[4].name = "jsadhdj";
    student[4].cgpa = 2.5;

    printf("Student Record:\n");
    for (i = 0; i < n; i++) {
        printf("\tName = %s\n", student[i].name);
        printf("\tRoll Number = %d\n", student[i].roll_number);
        printf("\tCGPA = %0.2f\n\n", student[i].cgpa);
    }

    return 0;
}
