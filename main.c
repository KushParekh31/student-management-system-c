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
    printf("\nEnter Student ID: ");
    scanf("%d", &s[*count].Student_ID);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[*count].Name);

    printf("Enter Gender (M/F): ");
    scanf(" %c", &s[*count].Gender);

    printf("Enter Semester: ");
    scanf("%d", &s[*count].semester);

    printf("Enter CGPA: ");
    scanf("%f", &s[*count].CGPA);

    printf("Enter Contact Number: ");
    scanf("%s", s[*count].Contact_No);

    (*count)++;

    printf("\nStudent Added Successfully!\n\n");
}

void RemoveStudents(struct Student_Data s[], int *count)
{
    int id, i, j;

    if (*count == 0)
    {
        printf("\nNo student records available.\n\n");
        return;
    }

    printf("\nEnter Student ID to Remove: ");
    scanf("%d", &id);

    for (i = 0; i < *count; i++)
    {
        if (s[i].Student_ID == id)
        {
            for (j = i; j < *count - 1; j++)
            {
                s[j] = s[j + 1];
            }

            (*count)--;

            printf("\nStudent Removed Successfully!\n\n");
            return;
        }
    }

    printf("\nStudent ID Not Found!\n\n");
}

void DisplayStudent(struct Student_Data s[], int count)
{
    int i;

    if (count == 0)
    {
        printf("\nNo student records available.\n\n");
        return;
    }

    printf("\n================ Student Records ================\n");

    for (i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("---------------------------------\n");
        printf("Student ID : %d\n", s[i].Student_ID);
        printf("Name       : %s\n", s[i].Name);
        printf("Gender     : %c\n", s[i].Gender);
        printf("Semester   : %d\n", s[i].semester);
        printf("CGPA       : %.2f\n", s[i].CGPA);
        printf("Contact No : %s\n", s[i].Contact_No);
    }

    printf("\n===============================================\n\n");
}
