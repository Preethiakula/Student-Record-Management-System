#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
} ST;

/* Add Record */
void addRecord(ST **);

/* Delete Record */
void deleteRecord(ST **);
void deleteAll(ST **);

/* Display Records */
void showRecords(ST *);

/* Modify Record */
void modifyRecord(ST *);

/* Save and Load Records */
void saveRecords(ST *);
void loadRecords(ST **);

/* Sort Records */
void sortRecords(ST *);

/* Reverse List */
void reverseList(ST **);

/* Count Records */
int countNode(ST *);

#endif
