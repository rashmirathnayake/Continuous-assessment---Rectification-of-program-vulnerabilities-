#include <stdio.h>
#include <string.h>

void vulnerableFunction()
{
    char buffer[10]; // Fixed-size buffer with 10 bytes

    printf("Enter some text: ");
    gets(buffer); // Unsafe function call, no bounds checking

    printf("You entered: %s\n", buffer);
}

int main()
{
    vulnerableFunction();
    return 0;
}
