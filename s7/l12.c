#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void copyFile(FILE *sourceFile, FILE *destinationFile, int option) {
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (option == 1) {
            fputc(toupper(ch), destinationFile); 
        } else if (option == 2) {
            fputc(tolower(ch), destinationFile); 
        } else if (option == 3) {
            if (islower(ch)) {
                fputc(toupper(ch), destinationFile); 
            } else {
                fputc(ch, destinationFile);
            }
        } else {
            fputc(ch, destinationFile); 
        }
    }
}
int main(int argc, char *argv[]) {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    int option = 0;
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp [option] source_file destination_file\n");
        return 1;
    }
    if (argc >= 4) {
        if (strcmp(argv[1], "-u") == 0) {
            option = 1; 
        } else if (strcmp(argv[1], "-l") == 0) {
            option = 2; 
        } else if (strcmp(argv[1], "-s") == 0) {
            option = 3; 
        }
    }
    strcpy(sourceFileName, argv[argc - 2]);
    strcpy(destinationFileName, argv[argc - 1]);
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    copyFile(sourceFile, destinationFile, option);
    printf("File copied successfully.\n");
    fclose(sourceFile);
    fclose(destinationFile);
    return 0;
}