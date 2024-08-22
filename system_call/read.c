#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[256];

    // Open file for reading
    file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read and print the file content
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);
    return EXIT_SUCCESS;
}