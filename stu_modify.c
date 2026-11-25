#include "header.h"

void modifyRecord(ST *ptr)
{
    ST *temp;
    int choice, roll, count = 0;
    float percentage, newPercentage;
    char name[50];
    char newName[50];

    if (ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("1. Modify by Roll Number\n");
    printf("2. Modify by Name\n");
    printf("3. Modify by Percentage\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);
    }
    else if (choice == 2)
    {
        printf("Enter name: ");
        scanf(" %49[^\n]", name);

        temp = ptr;

        while (temp)
        {
            if (strcmp(temp->name, name) == 0)
            {
                printf("%d %s %.2f\n",
                       temp->rollno, temp->name, temp->percentage);
                count++;
            }
            temp = temp->next;
        }

        if (count == 0)
        {
            printf("Record not found\n");
            return;
        }

        printf("Enter roll number to modify: ");
        scanf("%d", &roll);
    }
    else if (choice == 3)
    {
        printf("Enter percentage: ");
        scanf("%f", &percentage);

        if (percentage < 0 || percentage > 100)
        {
            printf("Invalid percentage\n");
            return;
        }

        temp = ptr;

        while (temp)
        {
            if (temp->percentage == percentage)
            {
                printf("%d %s %.2f\n",
                       temp->rollno, temp->name, temp->percentage);
                count++;
            }
            temp = temp->next;
        }

        if (count == 0)
        {
            printf("Record not found\n");
            return;
        }

        printf("Enter roll number to modify: ");
        scanf("%d", &roll);
    }
    else
    {
        printf("Invalid choice\n");
        return;
    }

    temp = ptr;

    while (temp)
    {
        if (temp->rollno == roll)
        {
            printf("Enter new name: ");
            scanf(" %49[^\n]", newName);

            printf("Enter new percentage: ");
            if (scanf("%f", &newPercentage) != 1 ||
                newPercentage < 0 || newPercentage > 100)
            {
                printf("Invalid percentage. Record not modified\n");
                return;
            }

            /* Update the record only after validating all new values */
            strcpy(temp->name, newName);
            temp->percentage = newPercentage;

            printf("Record modified successfully\n");
            return;
        }

        temp = temp->next;
    }

    printf("Record not found\n");
}
