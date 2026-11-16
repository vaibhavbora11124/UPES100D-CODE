
#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopper(struct Student s[], int n)
{
    int i, max = 0;

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    return s[max];
}

int main()
{
    struct Student s[3], topper;
    int i;

    printf("Enter details of 3 students:\n");

    for (i = 0; i < 3; i++)
    {
        scanf("%s %d %d", s[i].name,
              &s[i].roll_no, &s[i].marks);
    }

    topper = findTopper(s, 3);

    printf("\nTopper Details:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll: %d\n", topper.roll_no);
    printf("Marks: %d\n", topper.marks);

    return 0;
}
