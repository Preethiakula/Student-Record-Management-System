#include "header.h"

void sortRecords(ST *ptr)
{
    ST *p1, *p2;
    ST t;
    int i, j, c, choice;

    if (ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("1. Sort by Name\n");
    printf("2. Sort by Percentage\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2)
    {
        printf("Invalid choice\n");
        return;
    }

    c = countNode(ptr);

    for (i = 0, p1 = ptr; i < c - 1; i++, p1 = p1->next)
    {
        for (j = i + 1, p2 = p1->next; j < c; j++, p2 = p2->next)
        {
            if ((choice == 1 && strcmp(p1->name, p2->name) > 0) ||
                (choice == 2 && p1->percentage < p2->percentage))
            {
                t.rollno = p1->rollno;
                p1->rollno = p2->rollno;
                p2->rollno = t.rollno;

                strcpy(t.name, p1->name);
                strcpy(p1->name, p2->name);
                strcpy(p2->name, t.name);

                t.percentage = p1->percentage;
                p1->percentage = p2->percentage;
                p2->percentage = t.percentage;
            }
        }
    }

    printf("Records sorted successfully\n");
}
