#include "header.h"

void showRecords(ST *ptr)
{
    if (ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("\nRoll No.  Name                          Percentage\n");
    printf("---------------------------------------------------\n");

    while (ptr)
    {
        printf("%-9d %-29s %.2f\n",
               ptr->rollno, ptr->name, ptr->percentage);
        ptr = ptr->next;
    }
}
