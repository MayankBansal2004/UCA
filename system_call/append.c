#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    // Open file for writing (append mode)
    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file");
        return EXIT_FAILURE;
    }

    // Write to the file
    fprintf(file, "Hello, World!\n");

    printf("Data written to file '%s'.\n", "example.txt");

    // Close the file
    fclose(file);
    return EXIT_SUCCESS;
}