#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file_Pointer;
    char data[100];

    file_Pointer = fopen("fileData.txt", "w");

    if (file_Pointer == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("File loaded successfully.\n");
    printf("Enter data to write to the file(max 100 character):\n");

    fgets(data, sizeof(data), stdin);

    printf("You entered: %s\n", data);

    fprintf(file_Pointer, "%s", data);

    printf("Data written to the file successfully.\n\n");

    fclose(file_Pointer);
    return 0;
}
