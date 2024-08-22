#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    // Open file for writing (create if it doesn't exist)
    file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    printf("File '%s' opened successfully.\n", "example.txt");

    // Close the file
    fclose(file);
    return EXIT_SUCCESS;
}