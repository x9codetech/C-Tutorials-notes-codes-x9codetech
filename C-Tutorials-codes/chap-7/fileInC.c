#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file_Pointer;

    // file_Pointer = fopen("file.txt", "r");
    // file_Pointer = fopen("file.txt", "a");
    file_Pointer = fopen("file.txt", "w");

    if(file_Pointer == NULL){
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("File loaded successfully in write mode.\n");

    fprintf(file_Pointer, "Welcome to X9CodeTech With Faisal.");

    fclose(file_Pointer);
    return 0;
}
