#include <stdio.h>
#include <string.h>

void overflowExample()
{
    int isAdmin = 0; // Variable controlling access privileges
    char buffer[8];  // Small buffer for user input

    printf("Enter a password: ");
    gets(buffer); // Unsafe function, no bounds checking

    if (isAdmin)
    {
        printf("Access granted! You are an admin.\n");
    }
    else
    {
        printf("Access denied. You are not an admin.\n");
    }
}

int main()
{
    overflowExample();
    return 0;
}