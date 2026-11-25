#include "header.h"

void loadRecords(ST **ptr)
{
    FILE *fp;
    ST *newnode, *temp;
    int roll;
    char name[50];
    float percentage;

    fp = fopen("student.dat", "r");

    if (fp == NULL)
        return;

    while (fscanf(fp, "%d|%49[^|]|%f",
                  &roll, name, &percentage) == 3)
    {
        if (percentage < 0 || percentage > 100)
            continue;

        newnode = malloc(sizeof(ST));

        if (newnode == NULL)
        {
            printf("Memory allocation failed while loading records\n");
            break;
        }

        newnode->rollno = roll;
        strcpy(newnode->name, name);
        newnode->percentage = percentage;
        newnode->next = NULL;

        if (*ptr == NULL)
            *ptr = newnode;
        else
        {
            temp = *ptr;

            while (temp->next)
                temp = temp->next;

            temp->next = newnode;
        }
    }

    fclose(fp);
}
