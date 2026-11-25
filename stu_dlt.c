#include "header.h"

void deleteRecord(ST **ptr)
{
    ST *dlt, *prev;
    int choice, roll, count = 0;
    char name[50];

    if (*ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("1. Delete by Roll Number\n");
    printf("2. Delete by Name\n");
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

        dlt = *ptr;

        while (dlt)
        {
            if (strcmp(dlt->name, name) == 0)
            {
                printf("%d %s %.2f\n",
                       dlt->rollno, dlt->name, dlt->percentage);
                count++;
            }
            dlt = dlt->next;
        }

        if (count == 0)
        {
            printf("Record not found\n");
            return;
        }

        printf("Enter roll number to delete: ");
        scanf("%d", &roll);
    }
    else
    {
        printf("Invalid choice\n");
        return;
    }

    dlt = *ptr;
    prev = NULL;

    while (dlt)
    {
        if (dlt->rollno == roll)
        {
            if (prev == NULL)
                *ptr = dlt->next;
            else
                prev->next = dlt->next;

            free(dlt);
            printf("Record deleted successfully\n");
            return;
        }

        prev = dlt;
        dlt = dlt->next;
    }

    printf("Record not found\n");
}
