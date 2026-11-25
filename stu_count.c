#include "header.h"

int countNode(ST *ptr)
{
    int count = 0;

    while (ptr)
    {
        count++;
        ptr = ptr->next;
    }

    return count;
}
