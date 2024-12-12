// Write a program which takes five arguments on command line, opens a file and writes one argument per line in that file and closes the file.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if the correct number of arguments are passed
    if (argc != 6) {
        printf("Usage: %s <arg1> <arg2> <arg3> <arg4> <arg5>\n", argv[0]);
        return 1;
    }

    // Open the file in write mode
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write each argument to the file on a new line
    for (int i = 1; i < argc; i++) {
        fprintf(file, "%s\n", argv[i]);
    }

    // Close the file
    fclose(file);

    printf("Arguments written to 'output.txt' successfully.\n");
    return 0;
}
