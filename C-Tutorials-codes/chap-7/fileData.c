#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file_Pointer;
    char data[100];

    file_Pointer = fopen("fileData.txt", "r");

    if (file_Pointer == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("File loaded successfully.\n");

    while (fgets(data, sizeof(data), file_Pointer) != NULL)
    {
        printf("%s", data);
    }

    fclose(file_Pointer);
    return 0;
}
