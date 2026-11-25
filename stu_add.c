#include "header.h"

void addRecord(ST **ptr)
{
    ST *newnode, *temp;
    int roll = 1;

    newnode = malloc(sizeof(ST));

    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    /* Find the smallest available roll number */
    temp = *ptr;

    while (temp != NULL)
    {
        if (temp->rollno == roll)
        {
            roll++;
            temp = *ptr;
        }
        else
        {
            temp = temp->next;
        }
    }

    newnode->rollno = roll;

    printf("Enter name: ");
    if (scanf(" %49[^\n]", newnode->name) != 1)
    {
        free(newnode);
        printf("Invalid name\n");
        return;
    }

    printf("Enter percentage: ");
    if (scanf("%f", &newnode->percentage) != 1 ||
        newnode->percentage < 0 || newnode->percentage > 100)
    {
        printf("Invalid percentage\n");
        free(newnode);
        return;
    }

    newnode->next = NULL;

    if (*ptr == NULL)
    {
        *ptr = newnode;
    }
    else
    {
        temp = *ptr;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
    }

    printf("Record added successfully\n");
    printf("Roll Number: %d\n", roll);
}
