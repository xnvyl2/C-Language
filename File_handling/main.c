#include "../Common/headers.h"

/**
 * File Handling:
 * File is a collection of related data which is stored on the disk(Permanent storage).
 *
 * Operations:
 * 1. Create
 * 2. Update
 * 3. Read
 * 4. Write
 * 5. Delete
 * 6. Moving To specific location
 * 7. Clossing a file
 *
 * Functions:
 * 1. fopen():
 *      It is used to open exisiting file or create a new file if not present.
 *
 *      Syntax:
 *      FILE *fopen(const char *filename/filepath, const char *mode)
 *
 *      Return value:
 *      1. Return FILE * if succesfull.
 *      2. Returns NULL if file couldn't be opened.
 *
 * 2. fscanf():
 *      It is used to read data from the file.
 *
 *      Syntax:
 *      int fscanf(FILE *stream, const char *format, ...);
 *
 *      Return Value:
 *      Returns Integer value(0, -1).
 *
 * 3. fprintf():
 *      It is used to write data inside the file.
 *
 *      Syntax:
 *      int fprintf(FILE *stream, const char *format, ...);
 *
 *      Return Value:
 *      Returns Integer value(0, -1).
 *
 * 4. fclose():
 *      It is used to close a file.
 *
 *      Syntax:
 *      int fclose(FILE *stream);
 *
 *      Return Value:
 *      Returns Integer value(0, -1).
 *
 *
 * File Pointer:
 * In C, file operations are done through a FILE * pointer.
 * FILE *fp;
 */

int main()
{
    FILE *fp;
    char name[20];
    int age;

    // Create a file/ Open a file as write mode:
    fp = fopen("info.txt", "w");

    // Error checking
    if (fp == NULL)
    {
        printf("Error while opening file!");
        return 0;
    }

    // Write data inside the file
    fprintf(fp, "Name: Faisal\nAge: 20");

    // Close file
    fclose(fp);

    // Open a file as read mode
    fp = fopen("info.txt", "r");

    // Error checking
    if (fp == NULL)
    {
        printf("Error while opening file!");
        return 0;
    }

    // Read file
    fscanf(fp, "Name: %s\n Age: %d", name, &age);

    printf("Read -> Name: %s, Age: %d\n", name, age);

    // Close file
    fclose(fp);
    
    
    // Reading whole file 
    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        perror("Unable to open file");
        return 1;
    }

    // Go to end to find size
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    rewind(fp); // Reset to beginning

    // Allocate buffer
    char *buffer = (char *)malloc(size + 1);
   

    fread(buffer, 1, size, fp);
    buffer[size] = '\0'; // Null-terminate

    printf("File Contents:\n%s", buffer);

    fclose(fp);
    free(buffer);

    return 0;
}