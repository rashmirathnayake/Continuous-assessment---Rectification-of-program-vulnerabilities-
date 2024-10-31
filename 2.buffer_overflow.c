#include <stdio.h>
#include <string.h>

void copyInput(char *input)
{
    char buffer[10]; // Fixed-size buffer of 10 bytes

    // Vulnerable function call: does not check input length
    strcpy(buffer, input);

    printf("Buffer content: %s\n", buffer);
}

int main()
{
    char input[50];

    printf("Enter some text: ");
    scanf("%s", input); // This will read input from the user without any limit

    copyInput(input);
    return 0;
}