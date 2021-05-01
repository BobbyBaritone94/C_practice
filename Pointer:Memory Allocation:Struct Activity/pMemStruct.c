#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct structure
    {
        int number;
        char userChar;
        char *stringp;
        float f;
    } datatype;

int main()
{

    datatype *dataArray[5];
    int i;
    char str[500];

    for(i = 0; i < 5; i++)
    dataArray[i] = (datatype *)malloc(sizeof(datatype));

    
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter Data for structure %d:\n", i + 1);
        printf("Enter an integer: ");
        scanf("%d", &dataArray[i]->number);

        printf("Enter a single character: ");

        fflush(stdin);

        scanf(" %c", &dataArray[i]->userChar);

        fflush(stdin);
        printf("Enter a string: ");
        gets(str);

        dataArray[i]->stringp = (char *)malloc(sizeof(char) * (strlen(str) + 1));
        strcpy(dataArray[i]->stringp, str);

        printf("Enter a float: ");
        scanf("%f", &dataArray[i]->f);
    }

    for(i = 0; i < 5; i++)
    {
        printf("\n\nStructure %d", i + 1);
        printf("\nStructure %d pointer: %p", i + 1, dataArray[i]);
        printf("\nCharacter: %c", dataArray[i]->userChar);
        printf("\nInteger: %d", dataArray[i]->number);
        printf("\nString: %s", dataArray[i]->stringp);
        printf("\nFloating Point: %.1f", dataArray[i]->f);
    }

    for(i = 0; i < 5; i++) 
    {
        free(dataArray[i]);
    }

    printf("\n\nPointers after the free malloc operation: ");
    for(i = 0; i < 5; i++)
    {
        printf("\nStructure %d pointer: %p", i + 1, dataArray[i]);
    }
return 0;
}

