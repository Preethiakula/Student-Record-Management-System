#include "header.h"

void saveRecords(ST *ptr)
{
    FILE *fp;

    fp = fopen("student.dat", "w");

    if (fp == NULL)
    {
        printf("File not opened\n");
        return;
    }

    while (ptr)
    {
        fprintf(fp, "%d|%s|%.2f\n",
                ptr->rollno, ptr->name, ptr->percentage);
        ptr = ptr->next;
    }

    fclose(fp);
    printf("Records saved successfully\n");
}
