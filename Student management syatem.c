#include <stdio.h>

int main()
{
    int choice;
    int roll, m1, m2, m3, m4, m5;
    int total;
    float average;
    char name[30];
    char grade;

    do
    {
        printf("\nSTUDENT MARKS MANAGEMENT SYSTEM : \n");
        printf("--------------------------------\n");
        printf("1. Enter Student Details\n");
        printf("2. Calculate Result\n");
        printf("3. Display Result\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &roll);

                printf("Enter Student Name: ");
                scanf("%29s", name);

                printf("Enter Subject 1 Mark: ");
                scanf("%d", &m1);

                printf("Enter Subject 2 Mark: ");
                scanf("%d", &m2);

                printf("Enter Subject 3 Mark: ");
                scanf("%d", &m3);

                printf("Enter Subject 4 Mark: ");
                scanf("%d", &m4);

                printf("Enter Subject 5 Mark: ");
                scanf("%d", &m5);

                break;

            case 2:
                total = m1 + m2 + m3 + m4 + m5;

                average = total / 5.0;

                if(average >= 90)
                    grade = 'A';
                else if(average >= 80)
                    grade = 'B';
                else if(average >= 70)
                    grade = 'C';
                else if(average >= 60)
                    grade = 'D';
                else
                    grade = 'F';

                printf("\nResult Calculated Successfully!\n");

                break;

            case 3:
                printf("\nSTUDENT RESULT : \n");
                printf("------------------------\n");

                printf("Roll Number : %d\n", roll);
                printf("Name        : %s\n", name);
                printf("Total       : %d\n", total);
                printf("Average     : %.2f\n", average);
                printf("Grade       : %c\n", grade);

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}