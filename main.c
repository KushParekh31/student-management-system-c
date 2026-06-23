// Student Management System
#include <stdio.h>

// Structure Definition
struct Student_Data
{
    int Student_ID;
    int semester;
    float CGPA;
    char Name[50];
    char Gender;
    char Contact_No[15];
};

// Function Declarations
void AddStudents(struct Student_Data s[], int *count);
void RemoveStudents(struct Student_Data s[], int *count);
void UpdateStudentData(struct Student_Data s[], int *count);
void DisplayStudent(struct Student_Data s[], int count);

int main()
{
    // Student Array
    struct Student_Data s[100];
    int count = 0;

    printf("==========================\n");
    printf(" Student Management System\n");
    printf("==========================\n\n");

    while(1)
    {
        // Menu Options
        printf("1. Add New Student's Data\n");
        printf("2. Remove Selected Student's Data\n");
        printf("3. Update Student's Data\n");
        printf("4. Display Student's Data\n");
        printf("5. Exit Program\n");

        // User Choice
        int choice;
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        // Menu Processing
        switch (choice)
        {
            case 1:
                AddStudents(s, &count);
                break;

            case 2:
                RemoveStudents(s, &count);
                break;

            case 3:
                UpdateStudentData(s, &count);
                break;

            case 4:
                DisplayStudent(s, count);
                break;

            case 5:
                printf("Thank you for using the program!\n");
                return 0;
                break;

            default:
                printf("Invalid Input!\n");
                break;
        }
    }
    return 0;
}

// Function Definitions
void AddStudents(struct Student_Data s[], int *count)
{
    printf("Coming Soon...\n");
}

void RemoveStudents(struct Student_Data s[], int *count)
{
    printf("Coming Soon...\n");
}

void UpdateStudentData(struct Student_Data s[], int *count)
{
    printf("Coming Soon...\n");
}

void DisplayStudent(struct Student_Data s[], int count)
{
    printf("Coming Soon...\n");
}
