#include <stdio.h>
#include <string.h>

#define size 5

struct Student
{
    char name[50];
    int rollNumber;
    float marks[size];
    float cgpa;
};

void calculateCGPA(struct Student *student)
{
    float totalCredits = 0;
    float totalGradePoints = 0;

    for (int i = 0; i < size; i++)
    {
        totalCredits += 3; // Assuming all subjects have 3 credits
        if (student->marks[i] >= 90)
            totalGradePoints += 4.0 * 3; // Grade A, Grade Point4.0
        else if (student->marks[i] >= 80)
            totalGradePoints += 3.0 * 3; // Grade B, Grade Point3.0
        else if (student->marks[i] >= 70)
            totalGradePoints += 2.0 * 3; // Grade C, Grade Point2.0
        else if (student->marks[i] >= 60)
            totalGradePoints += 1.0 * 3; // Grade D, Grade Point1.0
        // You can define more grade criteria if needed
    }

    student->cgpa = totalGradePoints / totalCredits;
}

int main()
{
    struct Student student;

    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Removing newline character

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks for %d subjects:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
    }

    calculateCGPA(&student);

    printf("\nMark Sheet\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    for (int i = 0; i < size; i++)
    {
        printf("Subject %d Marks: %.2f\n", i + 1, student.marks[i]);
    }
    printf("CGPA: %.2f\n", student.cgpa);

    return 0;
}
