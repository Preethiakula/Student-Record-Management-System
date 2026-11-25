#include "header.h"

int main(void)
{
    ST *headptr = NULL;
    char choice;
    char saveChoice;

    loadRecords(&headptr);

    while (1)
    {
        printf("\n--- STUDENT RECORD MANAGEMENT ---\n");
        printf("a. Add Record\n");
        printf("d. Delete Record\n");
        printf("s. Show Records\n");
        printf("m. Modify Record\n");
        printf("v. Save Records\n");
        printf("t. Sort Records\n");
        printf("l. Delete All Records\n");
        printf("r. Reverse List\n");
        printf("e. Exit\n");

        printf("Enter your choice: ");
        if (scanf(" %c", &choice) != 1)
            break;

        switch (choice)
        {
            case 'a':
            case 'A':
                addRecord(&headptr);
                break;

            case 'd':
            case 'D':
                deleteRecord(&headptr);
                break;

            case 's':
            case 'S':
                showRecords(headptr);
                break;

            case 'm':
            case 'M':
                modifyRecord(headptr);
                break;

            case 'v':
            case 'V':
                saveRecords(headptr);
                break;

            case 't':
            case 'T':
                sortRecords(headptr);
                break;

            case 'l':
            case 'L':
                deleteAll(&headptr);
                break;

            case 'r':
            case 'R':
                reverseList(&headptr);
                break;

            case 'e':
            case 'E':
                printf("Save before exit? (S/E): ");
                if (scanf(" %c", &saveChoice) != 1)
                    saveChoice = 'E';

                if (saveChoice == 's' || saveChoice == 'S')
                    saveRecords(headptr);
                else if (saveChoice != 'e' && saveChoice != 'E')
                    printf("Invalid choice. Exiting without saving.\n");

                deleteAll(&headptr);
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    deleteAll(&headptr);
    return 0;
}
