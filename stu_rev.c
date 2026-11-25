#include "header.h"

void reverseList(ST **ptr)
{
    ST *prev = NULL, *temp, *next;

    if (*ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    temp = *ptr;

    while (temp != NULL)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }

    *ptr = prev;

    printf("List reversed successfully\n");
}
