#include "header.h"

void deleteAll(ST **ptr)
{
    ST *del = *ptr;

    if (*ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    while (del)
    {
        *ptr = del->next;
        free(del);
        del = *ptr;
    }

    printf("All records deleted successfully\n");
}
